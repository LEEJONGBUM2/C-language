#include<stdio.h>

void main() {
	int num = 10;
	int num2 = 20;

	if (num < num2) {
		printf("참입니다."); //참일때 실행되는 명령이다.
		printf("참입니다.2");
	}
	else {
		printf("거짓입니다."); //거짓일때 실행되는 명령이다.
		printf("거짓입니다.2");
	}
}

