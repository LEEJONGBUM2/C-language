#include <stdio.h>

void main() {
	int a = 0, b = 0, c = 0;
	int money = 0;

	printf("주사위 수를 지정하세요: ");
	scanf_s("%d %d %d", &a, &b, &c);
	rewind(stdin);
	if (!(a > 0 && 7 > a) || (b > 0 && 7 > b) || (c > 0 && 7 > c)) {
		printf("주사위의 수는 1 ~ 6 까지 밖에 없습니다.");
	}
	else if (a == b && a == c) {
		money = 10000 + (a * 1000);
	}
	else if (a == b || a == c) {
		money = 1000 + (a * 100);
	}
	else if (b == c) {
		money = 1000 + (b * 100);
	}
	else {
		if (a > b) {
			money = a;
		}
		else {
			money = b;
		}
		if (c > money) {
			money = c;
		}
		money *= 100;
	}
	printf("상금: %d\n", money);

	//int x;
	//int y;
	//int z;

	//printf("x를 입력하세요: ");
	//scanf_s("%d", &x);
	//rewind(stdin); //버퍼가 생긴다.//정확하게 하나씩 입력하도록 통제 및 연속으로 하나이상 통제 받지 않음.
	//printf("y를 입력하세요: ");
	//scanf_s("%d", &y);
	//rewind(stdin); //버퍼가 생긴다.
	//printf("z를 입력하세요: ");
	//scanf_s("%d", &z);
	//rewind(stdin); //버퍼가 생긴다.

	//if (x == y && y == z) {
	//	printf("%d\n", 10000 + x * 1000);
	//}
	//else if(x == y) {
	//	printf("%d\n", 1000 + x * 100);
	//}
	//else if (y == z) {
	//	printf("%d\n", 1000 + y * 100);
	//}
	//else if (z == x) {
	//	printf("%d\n", 1000 + z * 100);
	//}
	//else {
	//	if (x > y && x > z) {
	//		printf("%d\n", x * 100);
	//	}
	//	else{
	//		if (y > z && y > x) {
	//			printf("%d\n", y * 100);
	//		}
	//		else {
	//			printf("%d\n", z * 100);
	//		}
	//	}

	//}
}