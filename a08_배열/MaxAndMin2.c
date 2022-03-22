#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUMBER_INDEX 20

/*
	상수
	NUMBER_INDEX = 20
	numbers[NUMBER_INDEX] = {0}

	반복을 NUMBER_INDEX 만큼 반복하면서 랜덤한 값을 배열에 저장하고
	저장된 값을 전체 출력
	[0, 10, 20, 5, 30, 50]

	최대값: 50
	최소값: 3
*/

int maxNumber(int max, int min);
int minNumber(int max, int min);

void main() {
	int numbers[NUMBER_INDEX] = { 0 };
	int max = 0;
	int min = 0;

	srand(time(NULL));
	for (int i = 0; i < NUMBER_INDEX; i++) { //index는 숫자갯수를 나타냄을 의미한다.
		numbers[i] = (rand() % 33) + 1; //1부터 20까지 랜덤으로 나타냄을 의미한다 (20), (+1)은 1부터 20까지 난수로 나타냄을 의미한다.
	}

	printf("[");

	for (int i = 0; i < NUMBER_INDEX; i++) {
		if (i == 0) { //처음만 제외하고 콤마(,)를 사용한다.
			printf("%d", numbers[i]); //숫자를 찍는다.
			max = numbers[i]; //초기값 0가 들어가있다.
			min = numbers[i]; //첫번째는 그냥 숫자를 넣고
		}
		else {
			printf(",%d", numbers[i]);
			max = maxNumber(max, numbers[i]);
			min = minNumber(min, numbers[i]); //두번째 이상부터는 숫자끼리 비교를 한다.
		}
		
	}

	printf("]\n");
	printf("최대값: %d\n", max);
	printf("최소값: %d\n", min);
}

int maxNumber(int max, int num) {
	return num > max ? num : max;
}

int minNumber(int min, int num) { //0은 비포함, 처음엔 5랑 5가 들어간다. 첫번째는
	return num < min ? num : min;
}