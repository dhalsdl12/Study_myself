package JV연산자;

public class JV연산산술 {

	public static void main(String[] args) {
		int a = 10;
		int b = 3;
		double doubleB = 3;
		
		System.out.println(a+b);
		System.out.println(a-b);
		System.out.println(a*b);
		System.out.println(a/b); // 정수/정수 = 정수
		System.out.println(a%b);
		
		System.out.println(a/doubleB); // 정수/실수 = 실수 -> 실수표현할때 정확하게X
		System.out.println(a%doubleB); // 정수%실수 = 실수
		System.out.println(doubleB%b); // 실수%정수 = 실수

	}

}
