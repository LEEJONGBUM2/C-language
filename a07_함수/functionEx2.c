#include<stdio.h>
#include <stdbool.h>

/*
	�� ���� �Է��� �޾Ƽ� ���� Ȧ�� ���� ¦������ ����ϴ� ���α׷��Դϴ�.
	Ȧ�� �̸� true ��ȯ, ¦�� �̸� false ���� ��ȯ�ϴ� oddAndEven �Լ��� �����Ͽ�
	���α׷��� �Ͻÿ�.
*/

bool oddAndEven(int x, int y);

void main() {
	int x = 0, y = 0;
	printf("�� ���� �Է��ϼ���: ");
	scanf_s("%d %d", &x, &y);

	printf(oddAndEven(x, y) ? "true" : "false");
}

bool oddAndEven(int x, int y) {
	if ((x + y) % 2 != 0) {
		return true;
	}
	else {
		return false;
	}
}

//void main() {
//	int num1;
//	int num2;
//	
//	printf("num1�� �Է��ϼ���: ");
//	scanf_s("%d\n", &num1);
//	
//	printf("num2�� �Է��ϼ���: ");
//	scanf_s("%d\n", &num2);
//
//	if ((num1 + num2) % 2 == 0) {
//		return true;
//		printf("%d�� ¦���Դϴ�.", num1 + num2);
//	}
//	else {
//		return false;
//		printf("%d�� Ȧ���Դϴ�.", num1 + num2);
//	}
//	//oddAndEven();
//}

//void oddAndEven(int x, int y) {
//	if (x / 2 == 0) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}

//void even() {
//
//}



//#include <stdio.h>
//int main() {
//	int num;
//	printf("���� �Է�: ");
//	scanf("%d", &num);
//
//	if (num % 2 == 0)
//		printf("%d �� ¦���Դϴ�.", num);
//	else
//		printf("%d �� Ȧ���Դϴ�.", num);
//
//	return 0;
//}