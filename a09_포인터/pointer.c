#include<stdio.h>

/*
	* : �����׸���ũ
	& : ���ۼ���
	�迭���� [] �����ڸ� ���� �ּҰ����� ���ȴ�.
	������ ����: �ڷ��� �ڿ� * ���������� ����

*/

//sum �Լ��� ����Ͽ� a + b, a + c�� ����� main���� ����Ͻÿ�.

void sum(int a, int b, int c, int* result_a_b, int* result_a_c) { // (int a, int b, int c)�� �Ű������� �ǹ��Ѵ�. *a�� �ʿ��ϴ�. (�ּҰ�)
	*result_a_b = a + b; //�ּ������� �ϴ� ������ 0�� �ȴ�.
	*result_a_c = a + c;
																  
	/*int sum;
	sum = a + b + c;
	return sum;*/
}

void main() {
	int a = 10, b = 20, c = 5;
	int result_a_b = 0, result_a_c = 0; //�̰��� ���� �ƴϴ�.

	sum(a, b, c, &result_a_b, &result_a_c); //&�ּҰ��� �ް��Ѵ�. �ּҰ��� ���� �� �ִ� ������ ����Ʈ���� (*)

	printf("a + b = %d, a + c = %d\n", result_a_b, result_a_c); //&�� �ּҸ� �ް��Ѵ�.
	//�迭 �ּ�,
	//printf("%d", sum);
}


//#include <stdio.h>
//int  main()
//{
//	int  korean, english, math;  //���� ������ ������ ����, ����, �����̶�� ������ �����մϴ�.
//	int  total;  // �������� �� ���� ������ ������ �����մϴ�.
//	double average;  //����� ���� ������ �ݴϴ�.
//	printf("����, ����, ���� ������ �Է��ϼ��� : ");
//	scanf("%d%d%d", &korean, &english, &math);  //�Է¹��� ������ ������ �����մϴ�.
//	total = korean + english + math;  //�� ���� �� ������� ������ ������ �մϴ�.
//	average = total / 3.0;  // ����� �������� ���� 3���� ���� �� �Դϴ�.
//	printf("������ %d�̰� ����� %lf�Դϴ�.\n", total, average);
//	return  0;
//}



