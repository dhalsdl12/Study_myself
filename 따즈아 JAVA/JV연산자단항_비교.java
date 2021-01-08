package JV연산자;

public class JV연산자단항_비교 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int a = 10;
		int b = 20;
		int c = 30;
		
		System.out.println(a<b);
		System.out.println(a>b);
		System.out.println(a+b <= c);
		System.out.println(a+b >= c);
		System.out.println();
		
		double d = 3.14;
		double e = 5.15;
		System.out.println(d == e);
		System.out.println(d != e);
		System.out.println();
		
		String c1 = "hello java!";
		System.out.println(c1 == "hello java!"); //true
		System.out.println(c1.equals("hello java!")); //문자 비교할때 변수명.equals("비교대상")
		System.out.println(c1.equals("hello Java!")); //문자열은 대소문자!!
	}

}
