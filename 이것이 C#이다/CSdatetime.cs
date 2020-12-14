using System;

using System.Globalization;        //표준시간 \
using static System.Console;

namespace CSdatetime
{
    class CSdatetime
    {
        static void Main(string[] args)
        {
            DateTime dt = new DateTime(2020, 11, 9, 15, 46, 50);

            WriteLine("12 hour type : {0:yyyy-MM-dd tt hh:mm:ss (ddd)}", dt);
            WriteLine("24 hour type : {0:yyyy-MM-dd HH:mm:ss (ddd)}", dt);

            CultureInfo ciKo = new CultureInfo("ko-KR");    //한국기준

            WriteLine();
            WriteLine(dt.ToString("yyyy-MM-dd tt hh:mm:ss (ddd)", ciKo));
            WriteLine(dt.ToString("yyyy-MM-dd HH:mm:ss (ddd)", ciKo));

            WriteLine(dt.ToString(ciKo));
            WriteLine();
            CultureInfo ciEn = new CultureInfo("en-US");    //미국기준

            WriteLine(dt.ToString("yyyy-MM-dd tt hh:mm:ss (ddd)", ciEn));
            WriteLine(dt.ToString("yyyy-MM-dd tt hh:mm:ss (ddd)", ciEn));

            WriteLine(dt.ToString(ciEn));
        }
    }
}
