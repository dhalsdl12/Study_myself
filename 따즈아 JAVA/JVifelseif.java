package JVif;

import java.util.Scanner;

public class JVifelseif {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int age;
		System.out.print("����: ");
		age = sc.nextInt();
		
		if(age > 19)
		{
			System.out.println("�����Դϴ�");
			System.out.println("���� ����� ����˴ϴ�.");
		}
		else if(age>13)
		{
			System.out.println("û�ҳ��Դϴ�");
			System.out.println("û�ҳ� ����� ����˴ϴ�");
		}
		else
		{
			System.out.println("�����Դϴ�");
			System.out.println("���� ����� ����˴ϴ�");
		}
		System.out.println("������ ������ �ּ���.");
		
		sc.close();
	}

}
