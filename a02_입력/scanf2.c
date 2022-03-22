#include<stdio.h>
//#define MAX 100
//#define MIN 0

void main() {
	char a = 0;
	char b = 0;
	char c = 0;

	printf("세 수를 입력해 주세요: ");
	scanf_s("%c %c %c", &a, sizeof(a), &b, sizeof(b), &c, sizeof(c));

	//rewind(stdin); //rewind가 버퍼를 비우는 역할을 한다.
	//scanf_s("%d", &b);
	//rewind(stdin); //rewind가 버퍼를 비우는 역할을 한다.
	//scanf_s("%d", &c);
	//scanf_s("%d %d %d", &a, &b, &c);

	rewind(stdin); //rewind가 버퍼를 비우는 역할을 한다.
	printf("세 수의 합은 %c %c %c입니다.\n", a, b, c);

	//const double CONST_PI = 3.14;
	//int max = MAX;
	//int min = MIN;

	//printf("MAX = %d\nMIN = %d\nPI = %lf\n", MAX, MIN, CONST_PI);

	//int r = 0;

	//printf("원의 반지름을 입력해주세요: ");
	//scanf_s("%d", &r, sizeof(r)); //s는 size의 약자이다.
	//scanf_s("%d", &r);
	//printf("반지름이 r인 원의 넓이는 %lf입니다.\n", r * r * CONST_PI);
	//printf("반지름이 r인 원의 넓이는 %f입니다.\n", r * r * CONST_PI);
}