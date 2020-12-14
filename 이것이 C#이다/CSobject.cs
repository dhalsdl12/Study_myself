using System;

namespace CSobject
{
    class CSobject
    {
        static void Main(string[] args)
        {
            object a = 123;
            object b = 3.141592653589793238462643383279m;
            object c = true; //boㅐl c = true -> bool은 I바이트 크기의 데이터형식. 참거짓만 다룬다.
            object d = 'a';
            object e = "hello";

            Console.WriteLine(a);
            Console.WriteLine(b);
            Console.WriteLine(c);
            Console.WriteLine(d);
            Console.WriteLine(e);
        }
    }
}