#include<stdio.h>

/*
	����
	�迭 numArray = {0};
	�ݺ����� ����Ͽ���
	numArray[0] = [49]
	5 * i
	0 = ¦
	5 = Ȧ
	10 = ¦
	char[3] oddAndEvenValue = 'Ȧ';

	%s

*/

void main() {
	//int numArray[50] = 0;
	int numArrayy;
	int state;
	char str[3][10] = { "¦��","Ȧ��" };

	printf("�ϳ��� ���� �Է��Ͻÿ�? ");
	scanf_s("%d", &numArrayy);

	if (numArrayy % 2 == 0) {
		printf("%d�� ¦���Դϴ�.\n", numArrayy);
	}
	else {
		printf("%d�� Ȧ���Դϴ�.\n", numArrayy);
	}

	state = numArrayy % 2;
	printf("%d�� %s�Դϴ�.\n", numArrayy, str[state]);
	
	/*for (int i = 0; i < 50; i++) {
		int numArray[50] = 0;
		printf("%s\n", *numArray * 5);
	}*/
}

//for (int i = 0; i < 10; i++) {
//	printf("%d\n", numbers[i]);
//
//	//printf("%d\n", numbers);
//
//	//printf("%d\n", *numbers+1); //numbers�� �ּҰ��̴�. (����ü �迭)
//	//printf("%d\n", *(numbers + 1));
//	//*numbers�� �����Ѱ� 20�̰� �ű⿡ +1�̴�.
//
//}

//int main()
//{
//	int arr[10] = { 5, 10, 15, 22, 23, 102, 99, 102, 130, 8 };
//	int odd = 0;
//	int even = 0;
//
//
//	{
//
//		{
//			even++;
//		}
//
//		{
//			odd++;
//		}
//	}
//
//	printf("Ȧ���� ������ %d�� �Դϴ�.\n", odd);
//	printf("¦���� ������ %d�� �Դϴ�.\n", even);
//
//	return 0;
//}
//
//
//int numbers[10] = { 20, 1, 5, 2, 3, 4, 5, 6, 10, 15 };
//int num1 = 20;
//
//printf("%d\n", &num1); //&number1�� �ּҰ��̴�
//printf("%d\n", *(&num1));//20�� �ּҴ�.
//printf("\n");
//
//for (int i = 0; i < 10; i++) {
//	printf("%d\n", numbers[i]);
//
//	//printf("%d\n", numbers);
//
//	//printf("%d\n", *numbers+1); //numbers�� �ּҰ��̴�. (����ü �迭)
//	//printf("%d\n", *(numbers + 1));
//	//*numbers�� �����Ѱ� 20�̰� �ű⿡ +1�̴�.
//
//}
