#include<stdio.h>

void main() {
	int numbers[4][3] = { 
		{1,2,3}, //1={0,0}, 4={1,0}, 2={0,1}
		{4,5,6}, //�ٱ� for �� 1,4,7, ���� for �� 1,2,3
		{7,8,9},
		{10,11,12}
	};
	//numbers[0][0,1,2] 0,1,2�� 3���ְ� int 4����Ʈ�� 4*3=12

	int nums[3] = { 0 };
	sizeof(nums); //int�� 3���� �پ���. (nums)�� �迭�� �ּ��̰�, �ּ��� ����� 4*3=12�� ����, �迭�� �������̰� �迭�� �ѹ����� �ǹ��Ѵ�.

	int numbers_row_size = sizeof(numbers) / sizeof(numbers[0]); //ù��° �迭�� ���̴�. sizeof(numbers[0])�� ���� �ѹ����̴�. 36/12 = 3
	//(�� ���ڰ��� 12���̰�) int�� 4����Ʈ�� 12*4=48 �̰�, 48/12=4

	//sizeof(numbers[0]�̰��� ���� �ּҴ�.
	int numbers_column_size = sizeof(numbers) / numbers_row_size / sizeof(int); //int �ϳ��� ���� ������, 3�̶�� �ϴ� ������ ���´�.
	// (3*4*4)48/4/4

	printf("��(����)�� ����: %d\n", numbers_row_size); 
	printf("��(����)�� ����: %d\n", numbers_column_size); //�ϳ��� ������ int�̱⶧���� int�� 4����Ʈ�� 9�� ���� �����Ƿ� 4*9=36


	for (int i = 0; i < numbers_row_size; i++) {
		for (int j = 0; j < numbers_column_size; j++) {
			printf("index[%d, %d]: %d\n", i, j, numbers[i][j]); //�ּ� �ȿ� �ּҰ� �� �ִ�.
		}
	}
	printf("\n");
	printf("index[%d, %d]: %d\n", 0, 0, numbers[0]);
	printf("index[%d, %d]: %d\n", 0, 0, *numbers[0]);
	printf("index[%d, %d]: %d\n", 0, 0, *(numbers[0]+1));
	printf("index[%d, %d]: %d\n", 0, 0, *(numbers[0] + 2));
	printf("index[%d, %d]: %d\n", 0, 0, *(* (numbers + 1))); //�ι�° ���� �����ϱ� ���ؼ�
	printf("index[%d, %d]: %d\n", 0, 0, *(*(numbers + 1) + 1)); 
	printf("index[%d, %d]: %d\n", 0, 0, *(numbers[0] + 3) + 1);

	//�ּҰ� n n��ü�� 100�̰�, n+1=104, n+2=108�� �ȴ�.
}