package JVwhile;

import java.util.Scanner;

public class JVwhile {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String answer = "Y";
		int cnt = 0;
		
		while(answer.equals("Y"))
		{
			System.out.printf("������ ����Ͻðڽ��ϱ�?");
			answer = sc.nextLine();
			
			if(answer.equals("Y"))
			{
				System.out.printf("������ %d�� ����߽��ϴ�.\n",++cnt);
			}
		}
		System.out.println("�������");
		sc.close();
	}
}
