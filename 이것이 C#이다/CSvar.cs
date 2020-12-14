using System;

namespace CSvar
{
    class CSvar
    {
        static void Main(string[] args)
        {
            var a = 30;
            var b = 1.53;
            var c = 'c';
            var d = "dddd";
            var e = new int[] { 10, 20, 30, 40 };

            Console.WriteLine("type : {0}, value : {1}", a.GetType(), a);
            Console.WriteLine("type : {0}, value : {1}", b.GetType(), b);
            Console.WriteLine("type : {0}, value : {1}", c.GetType(), c);
            Console.WriteLine("type : {0}, value : {1}", d.GetType(), d);
            Console.Write("type : {0}, value : ", e.GetType());

            foreach (var f in e)                 //5장에서 설명 - 배열의 각 요소를 순회
                Console.Write("{0}", f);         //순회한것을 출력.

            Console.WriteLine();
        }
    }
}
