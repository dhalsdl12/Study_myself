package JV������;

public class JV�����ڴ���_�� {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int a = 10;
		int b = 20;
		int c = 30;
		
		System.out.println(a<b);
		System.out.println(a>b);
		System.out.println(a+b <= c);
		System.out.println(a+b >= c);
		System.out.println();
		
		double d = 3.14;
		double e = 5.15;
		System.out.println(d == e);
		System.out.println(d != e);
		System.out.println();
		
		String c1 = "hello java!";
		System.out.println(c1 == "hello java!"); //true
		System.out.println(c1.equals("hello java!")); //���� ���Ҷ� ������.equals("�񱳴��")
		System.out.println(c1.equals("hello Java!")); //���ڿ��� ��ҹ���!!
	}

}
