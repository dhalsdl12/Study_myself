using System;
using static System.Console;
namespace CSout
{
    class CSout
    {
        static void Divide(int a, int b, out int c, out int d)
        {
            c = a / b;
            d = a % b;
        }
        static void Main(string[] args)
        {
            int a = 20;
            int b = 3;

            Divide(a, b, out int c, out int d);

            WriteLine($"{a}, {b}");
        }
    }
}
