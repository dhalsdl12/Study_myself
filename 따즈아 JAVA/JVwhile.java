package JVwhile;

import java.util.Scanner;

public class JVwhile {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String answer = "Y";
		int cnt = 0;
		
		while(answer.equals("Y"))
		{
			System.out.printf("음악을 재생하시겠습니까?");
			answer = sc.nextLine();
			
			if(answer.equals("Y"))
			{
				System.out.printf("음악을 %d번 재생했습니다.\n",++cnt);
			}
		}
		System.out.println("재생종료");
		sc.close();
	}
}
