#include<stdio.h>

void main() {
	int num = 100;
	int* p_num = &num;
	//int* p_num2 = &num + 1;
	//*p_num2 = 101;
	int numbers[10] = { 1,3,5,7,9 };

	printf("num의 값: %d\n", num);
	printf("num의 주소값: %d\n", &num);
	printf("p_num의 값: %d\n", p_num);
	printf("p_num의 참조값: %d\n", *p_num);
	printf("p_num의 자료형 크기: %d\n", sizeof(p_num));
	//printf("p_num2의 값: %d\n", p_num2); //int가 4바이트이기 때문에 4가 증가한 셈이다.
	//printf("p_num2의 참조값: %d\n", *p_num2);//내부의 값을 변환할수가 없다.

	for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) { //주소값에 +1하면 4바이트가 이동을 한다.
		//printf("%d\n", numbers[i]);//주소값을 나타내기 위해서 대괄호[]를 뺀다.
		printf("현재배열주소: %d, 다음배열주소: %d\n", numbers, numbers+1); //주소값에 +1을 한다는 의미다.
		printf("현재배열주소: %d, 다음배열주소: %d\n", *numbers, *numbers + 1); //주소값에 +1을 한다는 의미다.
		printf("현재배열주소: %d, 다음배열주소: %d\n", *numbers, *(numbers + 1)); //주소값에 +1을 한다는 의미다.
		printf("현재배열주소: %d, 다음배열주소: %d\n", *(numbers + i), *(numbers + i + 1)); //주소값에 +1을 한다는 의미다.
	}
}