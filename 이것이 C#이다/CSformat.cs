using System;
using static System.Console;

namespace CSformat
{
    class CSformat
    {
        static void Main(string[] args)
        {
            string name = "최강엔씨";
            int victory = 83;
            int draw = 6;
            int lose = 55;

            WriteLine($"{name}, {victory,-5}, {draw,-5:d2}, {lose,-5}");

            string name2 = "롯데";
            int victory2 = 71;
            draw = 1;
            lose = 72;

            WriteLine($"{name2,-6}, {victory2,-5}, {draw,-5:d2}, {lose,-5}");

            WriteLine($"{"우승"}, {(victory>victory2?name:name2)}");
        }
    }
}
