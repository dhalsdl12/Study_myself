using System;

namespace CStostring
{
    class CStostring
    {
        static void Main(string[] args)
        {
            int a = 123;
            string b = a.ToString();
            Console.WriteLine(b);

            float c = 1.12345f;
            string d = c.ToString();
            Console.WriteLine(d);

            string e = "987";
            int f = Convert.ToInt32(e); //int f = int.Parse(e);
            Console.WriteLine(f);

            string g = "9.876";
            float h = float.Parse(g);
            Console.WriteLine(h);
        }
    }
}