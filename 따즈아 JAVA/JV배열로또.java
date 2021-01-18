package JV배열;

import java.util.*; //java.util 패키지에 있는 모든 클래스 import

public class JV배열로또 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		Random random = new Random();
		
		int lottoAr[] = new int[6];
		int userAr[] = new int[6];
		int bonus, bonusUser;
		int count = 0;
		
		for(int i = 0; i<6;i++) //lotto number
			lottoAr[i] = random.nextInt(45)+1;
		bonus = random.nextInt(45)+1;
		
		System.out.println("Lotto: " + Arrays.toString(lottoAr)+", bonus: " + bonus);
		
		System.out.println("숫자 6개 입력");
		for(int i = 0; i<6;i++)
			userAr[i] = sc.nextInt();
		System.out.println("보너스값 입력: ");
		bonusUser = sc.nextInt();
		
		for(int i = 0; i< 6;i++)
		{
			for(int j = 0; j<6; j++)
			{
				if(lottoAr[i] == userAr[j])
					count++;
			}
		}
		if(count == 6)
		{
			System.out.println("축하드립니다. 1등입니다.");
		}
		else if(count == 5) {
			if(bonus == bonusUser)
				System.out.println("축하드립니다. 2등입니다.");
			else
				System.out.println("축하드립니다. 3등입니다.");
		}
		else if(count == 4)
			System.out.println("축하드립니다. 4등입니다.");
		else if(count == 3)
			System.out.println("축하드립니다. 5등입니다.");
		else
			System.out.println("다음 기회에...");
		
		sc.close();
	}
}
