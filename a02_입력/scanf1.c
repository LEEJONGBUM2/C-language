#include<stdio.h>
#define MAX 100
#define MIN 0

void main() {
	const double CONST_PI = 3.14;
	//int max = MAX;
	//int min = MIN;

	printf("MAX = %d\nMIN = %d\nPI = %lf\n", MAX, MIN, CONST_PI);

	int r = 0;

	printf("���� �������� �Է����ּ���: ");
	//scanf_s("%d", &r, sizeof(r)); //s�� size�� �����̴�.
	scanf_s("%d", &r); 
	printf("�������� r�� ���� ���̴� %lf�Դϴ�.\n", r * r * CONST_PI);
	printf("�������� r�� ���� ���̴� %f�Դϴ�.\n", r * r * CONST_PI);
}