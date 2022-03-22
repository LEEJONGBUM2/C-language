#include<stdio.h>

/*
	함수란?
	기능이다.
	입력, 출력, 실행문
	입력(매개변수)
	출력(반환)

	함수가 무조건 위에서 정의가 되어 있어야 한다.

	void -> 공허하다, 비어있는, 아무런 의미가 없는
	void 일때도 return을 할수가 있다.

	함수의 구성
	라턴자료형 함수명(매개변수1, 매개변수2, ...){
		실행문
		<리턴 자료형이 있을 경우 즉, 리턴자료형이 void가 아닌 경우>
		return 값;
	}
*/
int sum3(int x, int y, int z); //추상메소드 abstract
void sum2(int x, int y);
void sum(int num1, int num2);
void test();

void main() {
	test(); //함수 호출(call)
	sum(10, 20);
	sum2(0, 2);
	int result = sum3(0, 2, 3); 
	printf("sum3: %d\n", result);
	printf("함수 호출 끝.\n"); //printf도 함수이다.
	//sum2(20, 30);

}

int sum3(int x, int y, int z) {
	if (x == 0) {
		return 0; //void 일때 return 사용법을 의미한다.
	}
	return x + y + z;
}

//void test() {
//	printf("테스트 함수 호출");
//}

void sum2(int x, int y) {
	if (x == 0) {
		return; //void 일때 return 사용법을 의미한다.
	}
	int z = x + y;
	printf("sum2: %d\n", z);
}

void sum(int num1, int num2) {
	printf("두 수의 합은 %d입니다.\n", num1 + num2); //x + y = z
}

void test() { //함수 정의
	printf("테스트 함수 호출\n");
}