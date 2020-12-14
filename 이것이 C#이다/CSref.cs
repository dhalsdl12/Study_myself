using System;
using static System.Console;

namespace CSref
{
    class CSref
    {
        static void Main(string[] args)
        {
            int x = 3;
            int y = 4;

            WriteLine($"x = {x}, y = {y}");

            swap(ref x, ref y);

            WriteLine($"x = {x}, y = {y}");
        }

        static void swap(ref int x, ref int y)
        {
            int temp = y;
            y = x;
            x = temp;

        }
    }
}
 
