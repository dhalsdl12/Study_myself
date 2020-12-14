using System;
using static System.Console;

namespace CSparams
{
    class CSparams
    {
        static int Sum(params int[] args)
        {
            WriteLine("Summing... ");

            int sum = 0;

            for(int i = 0; i < args.Length; i++)
            {
                sum = sum + args[i];
            }
            return sum;
        }
        static void Main(string[] args)
        {
            int sum = Sum(3, 4, 5, 6, 7, 8, 9);

            WriteLine($"sum : {sum}");
        }
    }
}
 
