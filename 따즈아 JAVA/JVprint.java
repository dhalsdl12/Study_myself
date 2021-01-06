package javastart;

public class Jvprint {

	public static void main(String[] args) {
//		System.out.println("문자열"); //문자열
//		System.out.println('a'); //문자형값
//		System.out.println(100); //정수형값
//		System.out.println(3.14); //실수형값
		//sysout 커서뒤 ctrl+space 누르면 해당메서드 자동완성
		
		//format: 형식지정자 -> %알파벳
		//System.out.printf("형식지정자", 출력값);
		System.out.printf("%s\n", "문자열값"); //문자열:string
		System.out.printf("%c\n", 66); //문자형:charceter(아스키코드값)
		System.out.printf("%d\n", 100); //정수값:decimal
		System.out.printf("%f\n", 3.14); //실수값:float
		
	}

}
