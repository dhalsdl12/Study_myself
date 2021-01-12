package JVwhile;

import java.util.Random;
import java.util.Scanner;

public class JVwhile2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Random random = new Random();
		
		int num = random.nextInt(100)+1;
		int user = -1;
		while(user!=num)
		{
			System.out.print("숫자입력: ");
			user = sc.nextInt();
			if(user==num)
			{
				System.out.println("True");
			}
			else if(user>num)
			{
				System.out.println("douw");
			}
			else
			{
				System.out.println("up");
			}
		}
		sc.close();
	}

}
