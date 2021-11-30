using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ScratchNet
{
    public abstract class Expression : Node
    {
        public abstract string ReturnType { get; }

        public abstract Descriptor Descriptor { get; }

        public abstract string Type { get; }
    }
}
