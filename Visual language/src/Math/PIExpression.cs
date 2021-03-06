using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ScratchNet
{
    public class PIExpression : Expression
    {
        public override string ReturnType => "number";

        public override Descriptor Descriptor
        {
            get
            {
                Descriptor d = new Descriptor();
                d.Add(new TextItemDescriptor(this, "π"));
                return d;
            }
        }

        public override string Type => "PIExpression";

        protected override Completion ExecuteImpl(ExecutionEnvironment enviroment)
        {
            return new Completion(Math.PI);
        }
    }
}
