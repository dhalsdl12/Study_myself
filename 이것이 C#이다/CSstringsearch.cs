using System;

namespace CSstringsearch
{
    class CSstringsearch
    {
        static void Main(string[] args)
        {
            string greeting = "Good Morning";

            Console.WriteLine(greeting);
            Console.WriteLine();

            //IndexOf()
            Console.WriteLine("IndexOf 'Good' : {0}", greeting.IndexOf("Good"));
            Console.WriteLine("IndexOf 'o' : {0}", greeting.IndexOf('o'));

            //LastIndexOf()
            Console.WriteLine("LastIndexOf 'Good' : {0}", greeting.LastIndexOf("Good"));
            Console.WriteLine("LastIndexOf 'o' : {0}", greeting.LastIndexOf('o'));

            //StartsWith()
            Console.WriteLine("StartsWith 'Good' : {0}", greeting.StartsWith("Good"));
            Console.WriteLine("StartsWith 'Morning' : {0}", greeting.StartsWith("Morning"));

            //EndsWith()
            Console.WriteLine("EndsWith 'Good' : {0}", greeting.EndsWith("Good"));
            Console.WriteLine("EndsWith 'Morning' : {0}", greeting.EndsWith("Morning"));

            //Contains()
            Console.WriteLine("Contains 'Morning' : {0}", greeting.Contains("Morning"));
            Console.WriteLine("Contains 'Evening' : {0}", greeting.Contains("Evening"));

            //Replace()
            Console.WriteLine("Replace 'Morning' with 'Evening' : {0}", greeting.Replace("Morning", "Evening"));

            string ha = Console.ReadLine();

            Console.WriteLine("IndexOf '{0}' : {1}", ha, greeting.IndexOf(ha));

            Console.WriteLine("LastIndexOf '{0}' : {1}", ha, greeting.LastIndexOf(ha));

            Console.WriteLine("StartsWith '{0}' : {1}", ha, greeting.StartsWith(ha));

            Console.WriteLine("EndsWith '{0}' : {1}", ha, greeting.EndsWith(ha));

            Console.WriteLine("Contains '{0}' : {1}", ha, greeting.Contains(ha));
        }
    }
}
