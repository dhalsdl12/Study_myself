package JV연산자;

public class JV연산자단항 {

	public static void main(String[] args) {
		//부호 연산자
		int a = -1;
		int b = 2;
		
		System.out.println(a);
		System.out.println(-b);

		//논리 부정 연산자
		boolean c = true; //c변수에 true값 저장
		boolean d = false;
		boolean e =! d; //e변수에 d가 true라면 false, 또는 반대로 저장
		
		System.out.println(c);
		System.out.println(!c);
	
		System.out.println(d);
		System.out.println(e);
	}

}
