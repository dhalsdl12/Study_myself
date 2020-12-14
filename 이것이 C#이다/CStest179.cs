using System;

namespace CStest179
{
    class CStest179
    {
        static void Main(string[] args)
        {
            Console.Write("반복 횟수를 입력하세요 : ");
            string number = Console.ReadLine();

            int num = int.Parse(number);

            if (num <= 0)
                Console.WriteLine("0보다 작거나 같은 수는 입력할 수 없습니다.");
            else
            {
                for (int i = 0; i < num; i++)
                {
                    for (int j = 0; j <= i; j++)
                    {
                        Console.Write("*");
                    }
                    Console.WriteLine();
                }
            }
        }
    }
}