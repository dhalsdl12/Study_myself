using System;
using static System.Console;

namespace CSoverloading
{
    class CSoverloading
    {
        static int plus(int a, int b)
        {
            WriteLine("Calling int plus(int, int)...");
            return a + b;
        }
        static int plus(int a, int b, int c)
        {
            WriteLine("Calling int plus(int, int, int)...");
            return a + b + c;
        }
        static double plus(double a, double b)
        {
            WriteLine("Calling double plus(double, double)...");
            return a + b;
        }
        static double plus(int a, double b)
        {
            WriteLine("Calling double plus(int, double)...");
            return a + b;
        }
        static void Main(string[] args)
        {
            WriteLine(plus(3, 4));
            WriteLine(plus(3, 4, 5));
            WriteLine(plus(3.4, 5.6));
            WriteLine(plus(3, 4.5));
        }
    }
}
