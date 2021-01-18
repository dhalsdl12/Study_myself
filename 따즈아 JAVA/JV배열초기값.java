package JV배열;

import java.util.Arrays;

public class JV배열초기값 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//int a[] = new int[] {10,20,30,40,50};
		
		//초기값을 바로 넣을때는 new int[] 생략이 가능하다.
		//int b[] = {1,2,3,4,5};
		int c[] = new int[10];
		for(int i = 0; i<c.length; i++)
		{
			c[i] = i;
			System.out.print(c[i] + " ");
		}
		System.out.println();
		System.out.println(Arrays.toString(c));
	}

}
