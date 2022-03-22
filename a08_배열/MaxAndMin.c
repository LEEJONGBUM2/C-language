#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX = 50;
#define MIN = 3;

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

int maxIntArray(int array[], int NUMBER_INDEX);
int minIntArray(int array[], int NUMBER_INDEX);
//	srand(time(NULL)); //srand가 의미가 있다.
//	int random = 0;
void main() {
	srand(time(NULL));
	const int NUMBER_INDEX = 20;
	int numbers[6] = {0, 10, 20, 5, 30, 50};
}

int maxIntArray(int array[], int NUMBER_INDEX) {
	int max = array[0];
	for (int i = 0; i < NUMBER_INDEX; i++) {
		if (array[i] > max) {
			max = array[i];
		}
		printf("%d\n", max);
	}
}

int minIntArray(int array[], int NUMBER_INDEX) {
	int min = array[0];
	for (int i = 0; i < NUMBER_INDEX; i++) {
		if (array[i] < min) {
			min = array[i];
		}
		printf("%d\n", min);
	}
}


//void main() {
//	//int numArray[50] = 0;
//	int numArrayy;
//	int state;
//	char str[3][10] = { "짝수","홀수" };
//
//	printf("하나의 수를 입력하시오? ");
//	scanf_s("%d", &numArrayy);
//
//	if (numArrayy % 2 == 0) {
//		printf("%d는 짝수입니다.\n", numArrayy);
//	}
//	else {
//		printf("%d는 홀수입니다.\n", numArrayy);
//	}
//
//	state = numArrayy % 2;
//	printf("%d는 %s입니다.\n", numArrayy, str[state]);
//
//	/*for (int i = 0; i < 50; i++) {
//		int numArray[50] = 0;
//		printf("%s\n", *numArray * 5);
//	}*/
//}

//void main() {
//	srand(time(NULL)); //srand가 의미가 있다.
//	int random = 0;
//	for (int i = 0; i < 10; i++) {
//		random = rand() % 9; //나머지 9값을 구할때 0부터 8까지가 나온다고 생각하면 된다.
//		printf("%d\n", random);
//
//	}
//}

//int maxIntArray(const int array[], int count) {
//    int max = array[0];
//    for (int i = 1; i < count; i++)
//    {
//        if (array[i] > max) max = array[i];
//    }
//    return max;
//}
//
//int minIntArray(const int array[], int count) {
//    int min = array[0];
//    for (int i = 1; i < count; i++)
//    {
//        if (array[i] < min) min = array[i];
//    }
//    return min;
//}