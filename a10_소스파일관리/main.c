#include "header.h"

int result = 0; //프로그램이 끝날때까지 이 변수는 살아있다.
//int sss = 10;

void main() {
	//a++;
	//c++;
	suma(10, 20);
	printf("\n");
	suma(10, 20);
	printf("\n");
	suma(10, 20);
	printf("\n");
	suma(10, 20);
	printf("\n");
	suma(10, 20);
	printf("\n");
	suma(10, 20);
	//suba(10, 20);
	test();
	printf("\n");
	printf("result = %d\n", result);

	//printf("%d\n", a);
	//printf("%d\n", c);
}

//void sum(int a, int b) {
//	printf("%d + %d = %d\n", a, b, a + b);
//}