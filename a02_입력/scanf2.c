#include<stdio.h>
//#define MAX 100
//#define MIN 0

void main() {
	char a = 0;
	char b = 0;
	char c = 0;

	printf("�� ���� �Է��� �ּ���: ");
	scanf_s("%c %c %c", &a, sizeof(a), &b, sizeof(b), &c, sizeof(c));

	//rewind(stdin); //rewind�� ���۸� ���� ������ �Ѵ�.
	//scanf_s("%d", &b);
	//rewind(stdin); //rewind�� ���۸� ���� ������ �Ѵ�.
	//scanf_s("%d", &c);
	//scanf_s("%d %d %d", &a, &b, &c);

	rewind(stdin); //rewind�� ���۸� ���� ������ �Ѵ�.
	printf("�� ���� ���� %c %c %c�Դϴ�.\n", a, b, c);

	//const double CONST_PI = 3.14;
	//int max = MAX;
	//int min = MIN;

	//printf("MAX = %d\nMIN = %d\nPI = %lf\n", MAX, MIN, CONST_PI);

	//int r = 0;

	//printf("���� �������� �Է����ּ���: ");
	//scanf_s("%d", &r, sizeof(r)); //s�� size�� �����̴�.
	//scanf_s("%d", &r);
	//printf("�������� r�� ���� ���̴� %lf�Դϴ�.\n", r * r * CONST_PI);
	//printf("�������� r�� ���� ���̴� %f�Դϴ�.\n", r * r * CONST_PI);
}