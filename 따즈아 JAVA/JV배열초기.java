package JV배열;

public class JV배열초기 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arInt[] = new int[3];
		double arDouble[] = new double[3];
		char arChar[] = new char[3];
		String arString[] = new String[3];
		
		for(int i = 0; i< 3; i++)
			System.out.print(arInt[i] + " ");

		System.out.println();
		for(int i = 0; i< 3; i++)
			System.out.print(arDouble[i] + " ");
		
		System.out.println();
		for(int i = 0; i< 3; i++)
			System.out.print(arChar[i] + " ");
		
		System.out.println();
		for(int i = 0; i< 3; i++)
			System.out.print(arString[i] + " ");
	}
}
