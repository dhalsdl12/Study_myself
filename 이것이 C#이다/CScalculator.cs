using System;

namespace CScalculator
{
    class calculator
    {
        public static int plus(int a, int b)
        {
            return a + b;
        }
        public static int minuss(int a, int b)
        {
            return a - b;
        }
    }

    class CScalculator
    {
        static void Main(string[] args)
        {
            int result = calculator.plus(3, 4);
            Console.WriteLine(result);

            int result2 = calculator.minuss(3, 4);
            Console.WriteLine(result2);
        }
    }

}