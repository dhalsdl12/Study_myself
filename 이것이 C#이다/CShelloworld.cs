using System;
using static System.Console;

namespace BrainCSharp
{
    class helloworld
    {
        static void Main(string[] args)
        {
            if(args.Length == 0)
            {
                Console.WriteLine("사용법 : helloworld.exe <이름>");
                return;
            }

            WriteLine("hello, {0}!", args[0]);
        }
    }
}