#include<stdio.h>

void main() {
	int numbers[10] = {20, 1, 5, 2, 3, 4, 5, 6, 10, 15};
	int num1 = 20;

	printf("%d\n", &num1); //&number1�� �ּҰ��̴�
	printf("%d\n", *(&num1));//20�� �ּҴ�.
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d\n", numbers[i]);
		
		//printf("%d\n", numbers);

		//printf("%d\n", *numbers+1); //numbers�� �ּҰ��̴�. (����ü �迭)
		//printf("%d\n", *(numbers + 1));
		//*numbers�� �����Ѱ� 20�̰� �ű⿡ +1�̴�.
		
	}

	/*int num1 = 10;
	int num2 = 20;
	int num3 = 20;
	int num4 = 20;
	int num5 = 20;
	int num6 = 20;
	int num7 = 20;
	int num8 = 20;

	printf("%d\n", num1);
	printf("%d\n", num2);*/
}

//int main(int argc, char* argv[]) {
//
//	int inputVal;
//	char str[2][10] = { "¦��","Ȧ��" };
//	int state;
//
//	printf("�ϳ��� ���� �Է��Ͻÿ�? ");
//	scanf("%d", &inputVal);
//
//	if (inputVal % 2 == 0) printf("%d�� ¦���Դϴ�.\n", inputVal);
//	else printf("%d�� Ȧ���Դϴ�.\n", inputVal);
//
//	state = inputVal % 2;
//	printf("%d�� %s�Դϴ�.\n", inputVal, str[state]);
//
//	system("pause");
//	return 0;
//}