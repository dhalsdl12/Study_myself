package JVif;

import java.util.Scanner;

public class JVif중첩 {

	public static void main(String[] args) {
		String id, password;
		
		Scanner sc = new Scanner(System.in);
		System.out.print("아이디를 입력: ");
		id = sc.nextLine();
		
		if(id.equals("java"))
		{
			System.out.println("id 일치!");
			System.out.print("비밀번호 입력: ");
			password = sc.nextLine();
			if(password.equals("abc123"))
			{
				System.out.println("password 일치!");
				System.out.println("로그인 성공");
			}
			else
			{
				System.out.println("password 불일치!");
			}
		}
		else
		{
			System.out.println("id 불일치!");
		}
		sc.close();
	}

}
