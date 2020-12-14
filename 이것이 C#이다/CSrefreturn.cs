using System;
using static System.Console;

namespace CSrefreturn
{
    class product
    {
        private int price = 100;

        public ref int getprice()
        {
            return ref price;
        }

        public void printprice()
        {
            WriteLine($"price :{price}");
        }
    }
    class CSrefreturn
    {
        static void Main(string[] args)
        {
            product carrot = new product();
            ref int ref_local_price = ref carrot.getprice();
            int normal_local_price = carrot.getprice();

            carrot.printprice();
            WriteLine($"Ref Local Price: {ref_local_price}");
            WriteLine($"Normal Local Price: {normal_local_price}");

            ref_local_price = 200;

            carrot.printprice();
            WriteLine($"Ref Local Price: {ref_local_price}");
            WriteLine($"Normal Local Price: {normal_local_price}");
        }
    }
} 
