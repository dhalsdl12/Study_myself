package JVrandom;

import java.util.Random;

public class JVrandom {

	public static void main(String[] args) {
		Random random = new Random();
		
		System.out.println("***random choosing pokemon***");
		System.out.println("1.��ī��");
		System.out.println("2.���α�");
		System.out.println("3.�̻��ؾ�");
		System.out.println();
	
		int mypokemon = random.nextInt(3)+1; // (0~2)+1
		System.out.println("���õ� ��ȣ: "+mypokemon);
		switch(mypokemon) {
		case 1:
			System.out.println("��ī�� ����! �鸸��Ʈ!!");
			break;
		case 2:
			System.out.println("���α�! ������!!");
			break;
		case 3:
			System.out.println("�̻��ؾ� ����! ����ä��!!");
			break;
		}
	}

}
