using System;

namespace CSstringmodify
{
    class CSstringmodify
    {
        static void Main(string[] args)
        {
            Console.WriteLine("ToLower()   : '{0}'", "ABC".ToLower());                      //모든 대문자를 소문자로 바꾸기
            Console.WriteLine("ToUpper()   : '{0}'", "abc".ToUpper());                      //모든 소문자를 대문자로 바꾸기

            Console.WriteLine("Insert()    : '{0}'", "Happy Friday!".Insert(5, " Sunny"));    //지정된 위치에 지정된 문자열 삽입
            Console.WriteLine("Remove()    : '{0}", "I Don't Love You.".Remove(2, 6));        //지정된 위치로부터 지정된 숫자만큼 지우기

            Console.WriteLine("Trim()      : '{0}'", " No Spaces ".Trim());                     //앞뒤에 있는 공백을 삭제
            Console.WriteLine("TrimStart() : '{0}'", " No Spaces ".TrimStart());           //앞에 있는 공백을 삭제
            Console.WriteLine("TrimEnd()   : '{0}'", " No Spaces ".TrimEnd());               //뒤에 있는 공백을 삭제
        }
    }
}
