#include<stdio.h>

/*
	문제
	배열 numArray = {0};
	반복문을 사용하여서
	numArray[0] = [49]
	5 * i
	0 = 짝
	5 = 홀
	10 = 짝
	char[3] oddAndEvenValue = '홀';

	%s

*/

void main() {
	//int numArray[50] = 0;
	int numArrayy;
	int state;
	char str[3][10] = { "짝수","홀수" };

	printf("하나의 수를 입력하시오? ");
	scanf_s("%d", &numArrayy);

	if (numArrayy % 2 == 0) {
		printf("%d는 짝수입니다.\n", numArrayy);
	}
	else {
		printf("%d는 홀수입니다.\n", numArrayy);
	}

	state = numArrayy % 2;
	printf("%d는 %s입니다.\n", numArrayy, str[state]);
	
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
//	//printf("%d\n", *numbers+1); //numbers는 주소값이다. (구조체 배열)
//	//printf("%d\n", *(numbers + 1));
//	//*numbers에 접근한건 20이고 거기에 +1이다.
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
//	printf("홀수의 갯수는 %d개 입니다.\n", odd);
//	printf("짝수의 갯수는 %d개 입니다.\n", even);
//
//	return 0;
//}
//
//
//int numbers[10] = { 20, 1, 5, 2, 3, 4, 5, 6, 10, 15 };
//int num1 = 20;
//
//printf("%d\n", &num1); //&number1는 주소값이다
//printf("%d\n", *(&num1));//20이 주소다.
//printf("\n");
//
//for (int i = 0; i < 10; i++) {
//	printf("%d\n", numbers[i]);
//
//	//printf("%d\n", numbers);
//
//	//printf("%d\n", *numbers+1); //numbers는 주소값이다. (구조체 배열)
//	//printf("%d\n", *(numbers + 1));
//	//*numbers에 접근한건 20이고 거기에 +1이다.
//
//}
