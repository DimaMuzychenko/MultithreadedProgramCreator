using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ScratchNet
{
    public class CallStatement : Statement
    {
        public string Function
        {
            get;
            set;
        }
        public string FunctionNameFormat { get; set; }
        public CallStatement()
        {
            Args = new List<Expression>();
            ArgTyps = new List<string>();
        }
        public List<Expression> Args { get;set; }
        public List<string> ArgTyps { get; set; }
        public string ReturnType
        {
            get { return "number|boolean|string"; }
        }

        public Completion Execute(ExecutionEnvironment enviroment)
        {
            ExecutionEnvironment current = new ExecutionEnvironment();
            
            foreach(var f in enviroment.Module.Functions)
            {
                if (Function.Equals(f.Name))
                {
                        for (int i = 0; i < Args.Count; i++)
                        {
                            Expression e = Args[i];
                            string name = ArgTyps[i];

                            Completion cp = e.Execute(enviroment);
                            if (cp.Type != CompletionType.Value)
                                return cp;
                            current.RegisterValue(f.Params[i].Name, cp.ReturnValue);
                        }
                    var c = f.Execute(current);
                    return c;
                }
            }
            DelegateFunction func = enviroment.GetFunction(Function);
            List<object> parameters = new List<object>();
            if (func != null)
            {
                try
                {
                    for (int i = 0; i < Args.Count; i++)
                    {
                        Expression e = Args[i];
                        string name = ArgTyps[i];

                        Completion cp = e.Execute(enviroment);
                        if (cp.Type != CompletionType.Value)
                            return cp;
                        parameters.Add(cp.ReturnValue);
                    }
                    return new Completion(func.Invoke(parameters.ToArray()));
                }catch(Exception e)
                {
                    return Completion.Exception(e.Message, this);
                }
            }
            return Completion.Void;
        }

        public Descriptor Descriptor
        {
            get
            {
                Descriptor desc = new Descriptor();
                if (string.IsNullOrEmpty(FunctionNameFormat))
                {
                    desc.Add(new TextItemDescriptor(this, Function + "("));
                    if (Args != null && Args.Count > 0)
                    {
                        int i = 0;
                        foreach (Expression p in Args)
                        {
                            if (i != 0)
                                desc.Add(new TextItemDescriptor(this, ", "));
                            string t = "";
                            if (ArgTyps != null && ArgTyps.Count >= i + 1)
                                t = ArgTyps[i];
                            desc.Add(new ArgumentDescriptor(this, i, "Args", t));
                            i++;
                        }
                    }
                    desc.Add(new TextItemDescriptor(this, ")"));
                }
                else
                {
                    string[] part = FunctionNameFormat.Split(new string[] { "[[", "]]" }, StringSplitOptions.RemoveEmptyEntries);
                    int i = 0;
                    foreach (string s in part)
                    {
                        if (s.StartsWith("{{") && s.EndsWith("}}"))
                        {
                            int length = s.Length;
                            int index = int.Parse(s.Substring(2).Substring(0, length - 4));
                            string t = "";
                            if (ArgTyps != null && ArgTyps.Count >= i + 1)
                                t = ArgTyps[i];
                            desc.Add(new ArgumentDescriptor(this, i, "Args", t));
                            i++;
                        }
                        else
                            desc.Add(new TextItemDescriptor(this, s));
                    }
                }
                return desc;
            }
        }

        public string Type
        {
            get { return ""; }
        }

        public BlockDescriptor BlockDescriptor
        {
            get { return null; }
        }
        public bool IsClosing
        {
            get { return false; }
        }
        
    }
}
