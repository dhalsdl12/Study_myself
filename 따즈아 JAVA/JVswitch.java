package JVswitch;

import java.util.Scanner;

public class JVswitch {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		System.out.println("***신호등 프로그램***");
		System.out.println("빨간불:1, 노란불:2, 초록불:3");
		System.out.print("signal");
		
		int sign = sc.nextInt();
		
		switch(sign)
		{
		case 1:
			System.out.println("red, stop");
			break;
		case 2:
			System.out.println("yellow, break");
			break;
		case 3:
			System.out.println("green, go");
			break;
		default:
			System.out.println("no one");
		}
	}

}
