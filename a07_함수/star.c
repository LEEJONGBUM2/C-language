#include<stdio.h>

/*
	[����� ���α׷�]
	1. �������� ġ��ģ ������ ���ﰢ��
	2. ���������� ġ��ģ ������ ���ﰢ��
	3. �������� ġ��ģ ������ ���ﰢ��
	4. ���������� ġ��ģ ������ ���ﰢ��
	5. ���ﰢ��

	���� ������ �Է��ϼ���: 5

	star1()
	star2()
	...
	star5()
*/

void star1(int n);
void star2(int n);
void star3(int n);
void star4(int n);
void star5(int n);

void main() {
	int select = 0;

	printf("[����� ���α׷�]\n");
	printf("1. �������� ġ���� ������ ���ﰢ��\n");
	printf("2. ���������� ġ���� ������ ���ﰢ��\n");
	printf("3. �������� ġ���� ������ ���ﰢ��\n");
	printf("4. ���������� ġ���� ������ ���ﰢ��\n");
	printf("5. ���ﰢ��\n");

	printf("����� ����: ");
	scanf_s("%d", &select);

	if (select == 1 || select == 2 || select == 3 || select == 4 || select == 5) {
		int n = 0;
		printf("���� ������ �Է����ּ���: ");
		scanf_s("%d", &n);

		if (select == 1) {
			star1(n);
		}
		else if (select == 2) {
			star2(n);
		}
		else if (select == 3) {
			star3(n);
		}
		else if (select == 4) {
			star4(n);
		}
		else if (select == 5) {
			star5(n);
		}
		else {
			printf("�ش��ȣ�� ���� ���ؿ�\n");
		}
	}
		/*int n = 0;
		int i = 0, j = 0, k = 0;
		printf("����� ���� ���� �Է��ϼ���: ");
		scanf_s("%d", &n);

		for (int i = 0; i < n; i++) {
			for (int j)
		}*/
}


void star1(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void star2(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

}

void star3(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void star4(int n) {
	for (int i = 0; i < n; i++) {
		for (int i = 0; i < n; i++) {
			printf(" ");
		}
		for (int j = 0; j < n - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

}
void star5(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			printf(" ");
		}
		for (int j = 0; j < n + 1; j++) {
			printf("*");
		}
	}
	printf("\n");
}


//void main() {
//	int n = 0;
//	int m = 5;
//	int i = 0, j = 0, k = 0;
//	printf("����� ���� ���� �Է��ϼ���: ");
//	scanf_s("%d", &n);
//	//int i = 0;
//
//	for (int i = 0; i < n; i++) { //��ü ����
//		for (int j = 0; j < i + 1; j++) { //�ȿ��� �� �Ŀ� �ۿ��� �� ���� �ִ�.
//			printf("*");// ���� ����
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	//int i = 0;
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5 - i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (int i = 0; i < 5; i++) {
//		for (int k = 1; k < 5 - i; k++) { //������ 4�� ������ �ȴ�.
//			printf(" ");
//		}
//		for (int j = 0; j < i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (int i = 0; i < 5; i++) {
//		for (k = 0; k < i; k++) {
//			printf(" ");
//		}
//		for (j = 0; j < 5 - i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < m - i; j++) {
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}

//#include <stdio.h>
//int main()
//{
//	int a[] = { 55, 77, 2, 66, 99, 88, 5, 92, 33, 44 };
//	int max, min, i;
//	max = 0; // �ִ밪: ���� ������ ���� ���� ������ �ʱ�ȭ
//	min = 100; // min=2147483649, �ּҰ�: ���� ������ ���� ū ������ �ʱ�ȭ
//
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] > max) max = a[i]; // �� ū���� �ִ밪���� �Ѵ�.
//		if (a[i] < min) min = a[i]; // �� ���� ���� �ּҰ����� �Ѵ�.
//	}
//
//	printf("�ִ밪: %d\n", max);
//	printf("�ּҰ�: %d\n", min);
//
//	return 0;
//}