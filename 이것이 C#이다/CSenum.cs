using System;

namespace CSenum
{
    class CSenum
    {
        enum DialogResult { yes = 10, no, cancel, confirm = 50, ok};
        static void Main(string[] args)
        {
            Console.WriteLine((int)DialogResult.yes);
            Console.WriteLine((int)DialogResult.no);
            Console.WriteLine((int)DialogResult.cancel);
            Console.WriteLine((int)DialogResult.confirm);
            Console.WriteLine((int)DialogResult.ok);
            
            //각 값을 대입하여 출력

            DialogResult result = DialogResult.no;
            
            //result 값에 no의 값을 대입

            Console.WriteLine(result == DialogResult.yes);
            Console.WriteLine(result == DialogResult.no);
            Console.WriteLine(result == DialogResult.cancel);
            Console.WriteLine(result == DialogResult.confirm);
            Console.WriteLine(result == DialogResult.ok);

            //result 값과 비교하여 같으면 true, 틀리면 false를 대입
        }
    }
}