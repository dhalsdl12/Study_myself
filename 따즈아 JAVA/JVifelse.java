package JVif;

import java.util.Scanner;

public class JVifelse {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int age = sc.nextInt();
		
		if(age>19)
		{
			System.out.println("성인입니다.");
			System.out.println("성인요금이 적용됩니다");
		}
		else
		{
			System.out.println("청소년입니다");
			System.out.println("청소년요금이 적용됩니다");
		}
		System.out.println("결제를 진행해 주세요.");
		
		sc.close();
	}

}
