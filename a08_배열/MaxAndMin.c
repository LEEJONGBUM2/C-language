#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX = 50;
#define MIN = 3;

/*
	���
	NUMBER_INDEX = 20
	numbers[NUMBER_INDEX] = {0}

	�ݺ��� NUMBER_INDEX ��ŭ �ݺ��ϸ鼭 ������ ���� �迭�� �����ϰ�
	����� ���� ��ü ���
	[0, 10, 20, 5, 30, 50]

	�ִ밪: 50
	�ּҰ�: 3
*/

int maxIntArray(int array[], int NUMBER_INDEX);
int minIntArray(int array[], int NUMBER_INDEX);
//	srand(time(NULL)); //srand�� �ǹ̰� �ִ�.
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
//	char str[3][10] = { "¦��","Ȧ��" };
//
//	printf("�ϳ��� ���� �Է��Ͻÿ�? ");
//	scanf_s("%d", &numArrayy);
//
//	if (numArrayy % 2 == 0) {
//		printf("%d�� ¦���Դϴ�.\n", numArrayy);
//	}
//	else {
//		printf("%d�� Ȧ���Դϴ�.\n", numArrayy);
//	}
//
//	state = numArrayy % 2;
//	printf("%d�� %s�Դϴ�.\n", numArrayy, str[state]);
//
//	/*for (int i = 0; i < 50; i++) {
//		int numArray[50] = 0;
//		printf("%s\n", *numArray * 5);
//	}*/
//}

//void main() {
//	srand(time(NULL)); //srand�� �ǹ̰� �ִ�.
//	int random = 0;
//	for (int i = 0; i < 10; i++) {
//		random = rand() % 9; //������ 9���� ���Ҷ� 0���� 8������ ���´ٰ� �����ϸ� �ȴ�.
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