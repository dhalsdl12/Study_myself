package JV�迭;

import java.util.Arrays;

public class JV�迭�ʱⰪ {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//int a[] = new int[] {10,20,30,40,50};
		
		//�ʱⰪ�� �ٷ� �������� new int[] ������ �����ϴ�.
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
