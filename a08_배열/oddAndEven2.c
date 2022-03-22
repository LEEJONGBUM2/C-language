#include<stdio.h>

/*
	문제
	배열 numArray = {0};
	반복문을 사용하여서
	numArray[0] = [49]
	5 * i
	0 = 짝
	5 = 홀
	10 = 짝
	char[3] oddAndEvenValue = '홀';

	%s
*/

void main() {
	int numArray[50] = { 0 }; //0으로 초기화를 하는거다. 모든것에 0의값을 넣겠다. int 4바이트정수 배열 50개 모두 0으로 값을 초기화
	for (int i = 0; i < 50; i++) {
		numArray[i] = 5 * i; //
		if (numArray[i] % 2 == 0) {
			printf("%d = 짝\n", numArray[i]);
		}
		else {
			printf("%d = 홀\n", numArray[i]);
		}
	}
	/*for (int i = 0; i < 50; i++) {
		if (numArray[i] % 2 == 0) {
			printf("%d = 짝\n", numArray[i]);
		}
		else {
			printf("%d = 홀\n", numArray[i]);
		}
	}*/
}