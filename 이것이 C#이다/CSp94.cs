using System;

namespace CSp94
{
    class CSp94
    {
        static void Main(string[] args)
        {
            Console.WriteLine("사각형의 너비를 입력하세요.");
            string width = Console.ReadLine();

            Console.WriteLine("사각형의 높이를 입력하세요.");
            string height = Console.ReadLine();

            int w = int.Parse(width);
            int h = int.Parse(height);

            Console.WriteLine("사격형의 넓이는 : {0}", w*h);
        }
    }
}
