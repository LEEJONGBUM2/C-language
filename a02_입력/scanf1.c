#include<stdio.h>
#define MAX 100
#define MIN 0

void main() {
	const double CONST_PI = 3.14;
	//int max = MAX;
	//int min = MIN;

	printf("MAX = %d\nMIN = %d\nPI = %lf\n", MAX, MIN, CONST_PI);

	int r = 0;

	printf("원의 반지름을 입력해주세요: ");
	//scanf_s("%d", &r, sizeof(r)); //s는 size의 약자이다.
	scanf_s("%d", &r); 
	printf("반지름이 r인 원의 넓이는 %lf입니다.\n", r * r * CONST_PI);
	printf("반지름이 r인 원의 넓이는 %f입니다.\n", r * r * CONST_PI);
}