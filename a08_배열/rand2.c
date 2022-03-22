#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define INDEX 20

void main() {
	int numbers[INDEX] = { 0 };
	int numbersSize = sizeof(numbers) / sizeof(int);
	//printf("%d\n", sizeof(numbers)/sizeof(int)); //4바이트가 붙어서 20*4 = 80 이다. int의 크기는 4바이트이다.

	srand(time(NULL));
	for (int i = 0; i < numbersSize; i++) {
		numbers[i] = (rand() % 20) + 1;
		for (int j = 0; j < i; j++) { //i가 1일때 반복을 한번한다.
			if (numbers[j] == numbers[i]) { //i를 다시 돌려서 break를 한다. 중복을 방지하기 위해서. 다시 돌아가면 i가 그대로 1이다.
				i--;
				break; //중복을 방지를 한다.
			}
		}
	}

	for (int i = 0; i < numbersSize; i++) {
		printf("%d\n", numbers[i]);
	}
}

//최대 최소값 구하는 인덱스 만들기