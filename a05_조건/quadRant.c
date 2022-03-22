#include <stdio.h>

void main() {
	double x = 0;
	double y = 0;
	
	printf("x좌표를 입력하세요: ");
	scanf_s("%lf", &x);
	rewind(stdin); //버퍼가 생긴다.
	
	printf("y좌표를 입력하세요: ");
	scanf_s("%lf", &y);
	rewind(stdin); //버퍼가 생긴다.

	if (x > 0 && y > 0) {
		printf("1사분면 입니다.");
	}
	else if (x > 0 && y < 0) {
		printf("2사분면 입니다.");
	}
	else if (x < 0 && y < 0) {
		printf("3사분면 입니다.");
	}
	else if(x<0 && y>0) {
		printf("4사분면 입니다.");
	}
}

//#include <iostream>
//
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a == b && b == c) printf("%d\n", 10000 + a * 1000);
//	else if (a == b) printf("%d\n", 1000 + a * 100);
//	else if (b == c) printf("%d\n", 1000 + b * 100);
//	else if (c == a) printf("%d\n", 1000 + c * 100);
//	else {
//		if (a > b && a > c) printf("%d\n", a * 100);
//		else {
//			if (b > c) printf("%d\n", b * 100);
//			else printf("%d\n", c * 100);
//		}
//	}
//	return 0;
//}