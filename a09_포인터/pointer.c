#include<stdio.h>

/*
	* : 에스테리스크
	& : 앤퍼센드
	배열에서 [] 연산자를 빼면 주소값으로 사용된다.
	포인터 변수: 자료형 뒤에 * 변수명으로 선언

*/

//sum 함수를 사용하여 a + b, a + c의 결과를 main에서 출력하시오.

void sum(int a, int b, int c, int* result_a_b, int* result_a_c) { // (int a, int b, int c)는 매개변수를 의미한다. *a가 필요하다. (주소값)
	*result_a_b = a + b; //주소참조를 하는 순간에 0이 된다.
	*result_a_c = a + c;
																  
	/*int sum;
	sum = a + b + c;
	return sum;*/
}

void main() {
	int a = 10, b = 20, c = 5;
	int result_a_b = 0, result_a_c = 0; //이것을 값이 아니다.

	sum(a, b, c, &result_a_b, &result_a_c); //&주소값을 받게한다. 주소값을 받을 수 있는 변수가 포인트변수 (*)

	printf("a + b = %d, a + c = %d\n", result_a_b, result_a_c); //&이 주소를 받게한다.
	//배열 주소,
	//printf("%d", sum);
}


//#include <stdio.h>
//int  main()
//{
//	int  korean, english, math;  //점수 세개를 저장할 국어, 영어, 수학이라는 변수를 선언합니다.
//	int  total;  // 점수들의 총 합을 저장할 변수를 선언합니다.
//	double average;  //평균을 따로 선언해 줍니다.
//	printf("국어, 영어, 수학 점수를 입력하세요 : ");
//	scanf("%d%d%d", &korean, &english, &math);  //입력받은 점수를 변수에 저장합니다.
//	total = korean + english + math;  //총 합은 세 과목들의 점수의 합으로 합니다.
//	average = total / 3.0;  // 평균은 세과목의 합을 3으로 나눈 것 입니다.
//	printf("총점은 %d이고 평균은 %lf입니다.\n", total, average);
//	return  0;
//}



