#include <stdio.h>

void main() {
	double x = 0;
	double y = 0;
	
	printf("x��ǥ�� �Է��ϼ���: ");
	scanf_s("%lf", &x);
	rewind(stdin); //���۰� �����.
	
	printf("y��ǥ�� �Է��ϼ���: ");
	scanf_s("%lf", &y);
	rewind(stdin); //���۰� �����.

	if (x > 0 && y > 0) {
		printf("1��и� �Դϴ�.");
	}
	else if (x > 0 && y < 0) {
		printf("2��и� �Դϴ�.");
	}
	else if (x < 0 && y < 0) {
		printf("3��и� �Դϴ�.");
	}
	else if(x<0 && y>0) {
		printf("4��и� �Դϴ�.");
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