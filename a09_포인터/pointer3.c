#include<stdio.h>

void main() {
	int num = 100;
	int* p_num = &num;
	//int* p_num2 = &num + 1;
	//*p_num2 = 101;
	int numbers[10] = { 1,3,5,7,9 };

	printf("num�� ��: %d\n", num);
	printf("num�� �ּҰ�: %d\n", &num);
	printf("p_num�� ��: %d\n", p_num);
	printf("p_num�� ������: %d\n", *p_num);
	printf("p_num�� �ڷ��� ũ��: %d\n", sizeof(p_num));
	//printf("p_num2�� ��: %d\n", p_num2); //int�� 4����Ʈ�̱� ������ 4�� ������ ���̴�.
	//printf("p_num2�� ������: %d\n", *p_num2);//������ ���� ��ȯ�Ҽ��� ����.

	for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) { //�ּҰ��� +1�ϸ� 4����Ʈ�� �̵��� �Ѵ�.
		//printf("%d\n", numbers[i]);//�ּҰ��� ��Ÿ���� ���ؼ� ���ȣ[]�� ����.
		printf("����迭�ּ�: %d, �����迭�ּ�: %d\n", numbers, numbers+1); //�ּҰ��� +1�� �Ѵٴ� �ǹ̴�.
		printf("����迭�ּ�: %d, �����迭�ּ�: %d\n", *numbers, *numbers + 1); //�ּҰ��� +1�� �Ѵٴ� �ǹ̴�.
		printf("����迭�ּ�: %d, �����迭�ּ�: %d\n", *numbers, *(numbers + 1)); //�ּҰ��� +1�� �Ѵٴ� �ǹ̴�.
		printf("����迭�ּ�: %d, �����迭�ּ�: %d\n", *(numbers + i), *(numbers + i + 1)); //�ּҰ��� +1�� �Ѵٴ� �ǹ̴�.
	}
}