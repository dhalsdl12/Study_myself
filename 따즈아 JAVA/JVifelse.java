package JVif;

import java.util.Scanner;

public class JVifelse {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int age = sc.nextInt();
		
		if(age>19)
		{
			System.out.println("�����Դϴ�.");
			System.out.println("���ο���� ����˴ϴ�");
		}
		else
		{
			System.out.println("û�ҳ��Դϴ�");
			System.out.println("û�ҳ����� ����˴ϴ�");
		}
		System.out.println("������ ������ �ּ���.");
		
		sc.close();
	}

}
