#include<stdio.h>

/*
	3���� ���� �Է¹޴´�.

	[�ִ밪 �ּҰ� ��� ���α׷�]
	1. �ִ밪 ���
	2. �ּҰ� ���

	maxFunction()
	1, 3, 2
	�ִ밪�� 3�Դϴ�.

	minFunction()
	�ּҰ��� 1�Դϴ�.
*/

void maxFunction(int x, int y, int z);
void minFunction(int x, int y, int z);

void main() {
	int x = 0, y = 0, z = 0, select = 0;
	printf("3���� ���� �Է��ϼ���: ");
	scanf_s("%d %d %d", &x, &y, &z);

	printf("[�ִ밪 �ּҰ� ��� ���α׷�]\n");
	printf("1. �ִ밪\n");
	printf("2. �ּҰ�\n");
	printf("�����ϼ���: ");
	scanf_s("%d", &select);

	if (select == 1) {
		maxFunction(x, y, z);
	}
	else if (select == 2) {
		minFunction(x, y, z);
	}
	else {
		printf("�ش� ��ȣ�� ������ �� �����ϴ�.\n");
	}

	/*int max, min, i;
	min = 0;
	max = 0;
	i = 0;

	printf("[�ִ밪 �ּҰ� ��� ���α׷�]\n");
	printf("1. �ִ밪 ���\n");
	printf("2. �ּҰ� ���\n");

	printf("1���� 3 �����߿� �ϳ��� �����ϼ���\n");
	scanf_s("%d", &i);

	if (i == 1) {
		maxFunction();
	}*/

}

void maxFunction(int x, int y, int z) {
	int max = 0;

	if (x > y) {
		max = x;
	}
	else {
		max = y;
	}
	if (z > max) {
		max = z;
	}
	printf("�ִ밪�� %d�Դϴ�.\n", max);
}
void minFunction(int x, int y, int z) {
	int min = 0;

	if (x > y) {
		min = y;
	}
	else {
		min = x;
	}
	if (z < min) {
		min = z;
	}
	printf("�ּҰ��� %d�Դϴ�.\n", min);

}

//int select = 0;
//
//printf("[����� ���α׷�]\n");
//printf("1. �������� ġ���� ������ ���ﰢ��\n");
//printf("2. ���������� ġ���� ������ ���ﰢ��\n");
//printf("3. �������� ġ���� ������ ���ﰢ��\n");
//printf("4. ���������� ġ���� ������ ���ﰢ��\n");
//printf("5. ���ﰢ��\n");
//
//printf("����� ����: ");
//scanf_s("%d", &select);
//
//if (select == 1 || select == 2 || select == 3 || select == 4 || select == 5) {
//	int n = 0;
//	printf("���� ������ �Է����ּ���: ");
//	scanf_s("%d", &n);
//
//	if (select == 1) {
//		star1(n);
//	}
//	else if (select == 2) {
//		star2(n);
//	}
//	else if (select == 3) {
//		star3(n);
//	}
//	else if (select == 4) {
//		star4(n);
//	}
//	else if (select == 5) {
//		star5(n);
//	}
//	else {
//		printf("�ش��ȣ�� ���� ���ؿ�\n");
//	}
//}
///*int n = 0;
//int i = 0, j = 0, k = 0;
//printf("����� ���� ���� �Է��ϼ���: ");
//scanf_s("%d", &n);
//
//for (int i = 0; i < n; i++) {
//	for (int j)
//}*/
//}