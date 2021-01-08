package JV변수상수;

public class JV형변환 {

	public static void main(String[] args) {
		int a = 65;
		float f = a; //자동형변환
		System.out.println(f);
		char c = (char)a; //명시적형변환(강제형변환)
		System.out.println(c);

	}

}
