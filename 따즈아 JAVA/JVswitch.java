package JVswitch;

import java.util.Scanner;

public class JVswitch {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		System.out.println("***��ȣ�� ���α׷�***");
		System.out.println("������:1, �����:2, �ʷϺ�:3");
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
