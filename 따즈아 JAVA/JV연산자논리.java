package JV연산자2;

public class JV연산자논리 {

	public static void main(String[] args) {
		boolean a = true;
		boolean b = false;
		boolean c = true;
		boolean d = false;
		
		System.out.println(a&&b);
		System.out.println(a&&c);
		System.out.println((2<4)&&(4<5));
		System.out.println();
		
		System.out.println(a||b);
		System.out.println(a||c);
		System.out.println(b||d); //||일때는 false false 일때 false
		System.out.println();
		
		System.out.println(!a);

	}

}
