#include<stdio.h>
#include <stdbool.h>

/*
	두 수를 입력을 받아서 합이 홀수 인지 짝수인지 출력하는 프로그램입니다.
	홀수 이면 true 반환, 짝수 이면 false 리턴 반환하는 oddAndEven 함수를 정의하여
	프로그래밍 하시오.
*/

bool oddAndEven(int x, int y);

void main() {
	int x = 0, y = 0;
	printf("두 수를 입력하세요: ");
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
//	printf("num1을 입력하세요: ");
//	scanf_s("%d\n", &num1);
//	
//	printf("num2을 입력하세요: ");
//	scanf_s("%d\n", &num2);
//
//	if ((num1 + num2) % 2 == 0) {
//		return true;
//		printf("%d은 짝수입니다.", num1 + num2);
//	}
//	else {
//		return false;
//		printf("%d은 홀수입니다.", num1 + num2);
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
//	printf("정수 입력: ");
//	scanf("%d", &num);
//
//	if (num % 2 == 0)
//		printf("%d 은 짝수입니다.", num);
//	else
//		printf("%d 은 홀수입니다.", num);
//
//	return 0;
//}