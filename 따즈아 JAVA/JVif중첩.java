package JVif;

import java.util.Scanner;

public class JVif��ø {

	public static void main(String[] args) {
		String id, password;
		
		Scanner sc = new Scanner(System.in);
		System.out.print("���̵� �Է�: ");
		id = sc.nextLine();
		
		if(id.equals("java"))
		{
			System.out.println("id ��ġ!");
			System.out.print("��й�ȣ �Է�: ");
			password = sc.nextLine();
			if(password.equals("abc123"))
			{
				System.out.println("password ��ġ!");
				System.out.println("�α��� ����");
			}
			else
			{
				System.out.println("password ����ġ!");
			}
		}
		else
		{
			System.out.println("id ����ġ!");
		}
		sc.close();
	}

}
