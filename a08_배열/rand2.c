#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define INDEX 20

void main() {
	int numbers[INDEX] = { 0 };
	int numbersSize = sizeof(numbers) / sizeof(int);
	//printf("%d\n", sizeof(numbers)/sizeof(int)); //4����Ʈ�� �پ 20*4 = 80 �̴�. int�� ũ��� 4����Ʈ�̴�.

	srand(time(NULL));
	for (int i = 0; i < numbersSize; i++) {
		numbers[i] = (rand() % 20) + 1;
		for (int j = 0; j < i; j++) { //i�� 1�϶� �ݺ��� �ѹ��Ѵ�.
			if (numbers[j] == numbers[i]) { //i�� �ٽ� ������ break�� �Ѵ�. �ߺ��� �����ϱ� ���ؼ�. �ٽ� ���ư��� i�� �״�� 1�̴�.
				i--;
				break; //�ߺ��� ������ �Ѵ�.
			}
		}
	}

	for (int i = 0; i < numbersSize; i++) {
		printf("%d\n", numbers[i]);
	}
}

//�ִ� �ּҰ� ���ϴ� �ε��� �����