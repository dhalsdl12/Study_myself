package JV������;

public class JV������ {

	public static void main(String[] args) {
		int a = 10;
		int b = 3;
		double doubleB = 3;
		
		System.out.println(a+b);
		System.out.println(a-b);
		System.out.println(a*b);
		System.out.println(a/b); // ����/���� = ����
		System.out.println(a%b);
		
		System.out.println(a/doubleB); // ����/�Ǽ� = �Ǽ� -> �Ǽ�ǥ���Ҷ� ��Ȯ�ϰ�X
		System.out.println(a%doubleB); // ����%�Ǽ� = �Ǽ�
		System.out.println(doubleB%b); // �Ǽ�%���� = �Ǽ�

	}

}
