#include<stdio.h>

void main() {
	int numbers[10] = {20, 1, 5, 2, 3, 4, 5, 6, 10, 15};
	int num1 = 20;

	printf("%d\n", &num1); //&number1는 주소값이다
	printf("%d\n", *(&num1));//20이 주소다.
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d\n", numbers[i]);
		
		//printf("%d\n", numbers);

		//printf("%d\n", *numbers+1); //numbers는 주소값이다. (구조체 배열)
		//printf("%d\n", *(numbers + 1));
		//*numbers에 접근한건 20이고 거기에 +1이다.
		
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
//	char str[2][10] = { "짝수","홀수" };
//	int state;
//
//	printf("하나의 수를 입력하시오? ");
//	scanf("%d", &inputVal);
//
//	if (inputVal % 2 == 0) printf("%d는 짝수입니다.\n", inputVal);
//	else printf("%d는 홀수입니다.\n", inputVal);
//
//	state = inputVal % 2;
//	printf("%d는 %s입니다.\n", inputVal, str[state]);
//
//	system("pause");
//	return 0;
//}