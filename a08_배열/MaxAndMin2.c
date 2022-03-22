#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUMBER_INDEX 20

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

int maxNumber(int max, int min);
int minNumber(int max, int min);

void main() {
	int numbers[NUMBER_INDEX] = { 0 };
	int max = 0;
	int min = 0;

	srand(time(NULL));
	for (int i = 0; i < NUMBER_INDEX; i++) { //index�� ���ڰ����� ��Ÿ���� �ǹ��Ѵ�.
		numbers[i] = (rand() % 33) + 1; //1���� 20���� �������� ��Ÿ���� �ǹ��Ѵ� (20), (+1)�� 1���� 20���� ������ ��Ÿ���� �ǹ��Ѵ�.
	}

	printf("[");

	for (int i = 0; i < NUMBER_INDEX; i++) {
		if (i == 0) { //ó���� �����ϰ� �޸�(,)�� ����Ѵ�.
			printf("%d", numbers[i]); //���ڸ� ��´�.
			max = numbers[i]; //�ʱⰪ 0�� ���ִ�.
			min = numbers[i]; //ù��°�� �׳� ���ڸ� �ְ�
		}
		else {
			printf(",%d", numbers[i]);
			max = maxNumber(max, numbers[i]);
			min = minNumber(min, numbers[i]); //�ι�° �̻���ʹ� ���ڳ��� �񱳸� �Ѵ�.
		}
		
	}

	printf("]\n");
	printf("�ִ밪: %d\n", max);
	printf("�ּҰ�: %d\n", min);
}

int maxNumber(int max, int num) {
	return num > max ? num : max;
}

int minNumber(int min, int num) { //0�� ������, ó���� 5�� 5�� ����. ù��°��
	return num < min ? num : min;
}