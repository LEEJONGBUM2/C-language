#include<stdio.h> // #�� ������ ��ó����, standard Input/Output library
// include > ��� �߰� ���� ���� �ҽ� �ڵ忡 �߰�
// stdio.h ǥ�� �����


void main() { //�Լ� function, ���α׷��� ������, void �����ϴ�, ����ִ�, ������ ����.
	printf("�̸�: ");//ctrl + d�� �����ϱ� �̴�.
	printf("������\n");//ctrl + f5�� ������ ������ �ȴ�.
	printf("�ּ�: ");//�� ���ڴ� ''���, �ΰ� �̻��� ���ڴ� ""���
	printf("�λ걤���� �λ�����\n");
	printf("����: ");
	printf("�л�\n");
	printf("�г�: ");
	printf("1\n\n");
	unsigned int level = 3000000000; //�ڷ��� int, ������ level
	printf("%u %u", level, level); //unsigned ���� u
	int x = 15;
	int y = 20;
	// 15 + 20 = 35
	printf("\n%d + %d = %d\n", x, y, x+y);
	printf("%d\n", 0xf1); //0x0 f=15 a=10 //0x �� 16���� �ǹ�
	printf("%d\n", 071); //0�� 8������ �ǹ��Ѵ�.
	printf("%d\n", 027);

	printf("%lf\n", 1.12345);

	char i = 65;
	printf("%d\n", i);
	printf("%d\n", i);
	

	printf("\n�̸�: ");//ctrl + d�� �����ϱ� �̴�.
	printf("������\n");//ctrl + f5�� ������ ������ �ȴ�. 
	printf("�ּ�: ");//�� ���ڴ� ''���, �ΰ� �̻��� ���ڴ� ""���
	printf("�λ걤���� �λ�����\n");
	printf("����: ");
	printf("�л�\n");
	printf("�г�: ");
	printf("1\n\n");

	char lineFeed = '\n'; //\n�� ���͸� �ǹ�
	char carriageReturn = '\r';
	char tab = '\t'; //\t�� ������ �ǹ��Ѵ�.

	printf("%c%c%c%c\n", 'a', lineFeed, 'b', lineFeed);

	char cc = 'a';
	int ii = cc;
	printf("%d\n", ii);

	int ic = 200;
	char ci = (char)ic; //����� ����ȯ
	double d = 3.14; //�Ǽ� 8����Ʈ�� 1����Ʈ�� �ִ´�. int 4 ����Ʈ
	ci = (char)d;

	printf("%d\n", ci);

	int num1 = 3;
	double dnum1 = 1.2;

	int num2 = 4;
	double dnum2 = 1.1;

	printf("%lf + %lf = %lf\n", (double)(num1+(int)dnum1), (double)(num2+(int)dnum2), num1+dnum1+num2+dnum2);

	printf("%lf + %lf = %lf\n", num1 + dnum1, num2 + dnum2, num1 + dnum1 + num2 + dnum2);

	////////////////////////////////////////////////////////////////////////////
	/*
		����1.
	*/
	double kor = 85.2;
	int kor1 = kor;
	double eng = 79.8;
	int eng1 = eng;
	double math = 95.5;
	int math1 = math;

	//��Ż ������(/) 3
	int total = (int)kor1+(int)eng1+(int)math1;
	double avg = total/3.0;

	printf("���� %d\n", total);
	printf("��� %lf\n", avg);

	//


	//#�� ������ ��ó�����̴�. (#define PI) ������ �����ϴ°��� const �̴�.
	//const char SAVE_PATH[] = "C:\Program Files"; lf = long float�� ���Ӹ��̴�. (double)
	//���ͷ� ����=int, �Ǽ�=double, long�� float, ������ �� �÷��ֱ� ���ؼ� double�� ����Ѵ�.
	//����ȯ ���ڸ� ������ �ٲٰ� ������ �Ǽ��� �ٲܼ��� �ִ�.
	//��ĳ���� ���� �������κ��� ū ���� �ű� (����->����->�Ǽ�) ���� ���� �������� ū �������� �� ��ȯ, ������ �� ��ȯ(�� ��ȯ Ÿ�� ���� ����)
	//�Ǽ� 8����Ʈ, ���� 4����Ʈ, ���� 1 ����Ʈ
	//�ٿ�ĳ����: ���� ū �������� ���� �������� �� ��ȯ, ����� �� ��ȯ(�� ��ȯ Ÿ�� ���� �Ұ���)

}