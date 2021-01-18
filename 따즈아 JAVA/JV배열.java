package JV배열;

public class JV배열 {

	public static void main(String[] args) {
		// 3명의 학생 점수를 저장
		int score[];
		score = new int[30];
		
		score[0] = 100;
		score[1] = 80;
		score[2] = 70;
		
		for(int i = 0; i < 3; i++)
		{
			System.out.println(i+1 + "번째 학생의 점수 = " + score[i] + "점");
		}
		
	}
}
