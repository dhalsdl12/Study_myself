package JV������2;

public class JV�����ں�Ʈ {

	public static void main(String[] args) {
		int a = 15; //1111(2)
		int b = 5;  //0101(2)
		
		System.out.println(a&b); //0101(2) = 5
		System.out.println(a|b); //1111(2) = 15
		System.out.println(a^b); //1010(2) = 10
		System.out.println(~b);  //1010(2) = 10X -> -6
		//not���� ���� : ~a = -a-1
		System.out.println();
		
		System.out.println(a>>2); //������ ����Ʈ ������: 1ĭ�̵��Ҷ����� /2
		//15/2 = 7, 7/2 = 3
		System.out.println(b<<4); //���� ����Ʈ ������: 1ĭ �̵��Ҷ����� *2
		//5*2 = 10, 10*2 = 20, 20*2 = 40, 40*2 = 80
		
		
	}

}
