package javastart;
//1. 입력하는 기능을 내 코드에 연결시켜줘
import java.util.Scanner;
public class Jvinput {

	public static void main(String[] args) {
		//2. 준비물: scanner을 sc라는 이름으로 사용
		Scanner sc = new Scanner(System.in);
		//sc.next(); 문자열
		//문자열 입력받아서 출력시킨다.
		//System.out.println(sc.next());
		
		//sc.nextInt(); 정수값
		//System.out.println(sc.nextInt());
		
		//sc.nextFloat(); 실수형
		//System.out.println(sc.nextFloat());
		
		System.out.println(sc.nextLine()); //띄어쓰기 가능!!
	}	

}
