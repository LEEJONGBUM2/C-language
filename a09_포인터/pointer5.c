#include<stdio.h>
//2���� �迭 �Լ�
void check(int* array) {
	printf("%d\n", array);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) { 
			printf("%d\n", *(array + (i*5)+j)); //index�� 0������ 4���� �ִ�. 0.1�� �ƴϰ� 1�̴�.
			//�迭�� �ּҰ� ������ �پ� �ִ�. array 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19(3*5)+4
		}
	}
}

void main() {
	int num_array[4][5] = {
		{1,0,0,0,0},
		{1,0,1,0,1},
		{0,1,1,1,1},
		{0,0,1,1,0},
	};

	printf("[%d, %d] : 1\n", 1, 1);
	printf("�迭 �ּ� %d\n", num_array);
	printf("���� �迭�ּ� %d\n", num_array+1);
	printf("�迭 �÷�(����) �����ּ� %d\n", *num_array+1);
	printf("%d\n", **num_array);
	printf("\n");

	check(num_array);
}