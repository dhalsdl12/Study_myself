using System;

namespace CSint
{
    class CSint
    {
        static void Main(string[] args)
        {
            sbyte a = -10;
            sbyte b = -40;

            Console.WriteLine($"a = {a}, b = {b}");

            byte c = 240;
            byte d = 0b11110000;
            Console.WriteLine($"c = {c}, d = {d}");
        }
    }
}