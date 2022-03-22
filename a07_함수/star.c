#include<stdio.h>

/*
	[별찍기 프로그램]
	1. 왼쪽으로 치우친 정방향 직삼각형
	2. 오른쪽으로 치우친 정방향 직삼각형
	3. 왼쪽으로 치우친 역방향 직삼각형
	4. 오른쪽으로 치우친 역방향 직삼각형
	5. 정삼각형

	행의 개수를 입력하세요: 5

	star1()
	star2()
	...
	star5()
*/

void star1(int n);
void star2(int n);
void star3(int n);
void star4(int n);
void star5(int n);

void main() {
	int select = 0;

	printf("[별찍기 프로그램]\n");
	printf("1. 왼쪽으로 치우진 정방향 직삼각형\n");
	printf("2. 오른쪽으로 치우진 정방향 직삼각형\n");
	printf("3. 왼쪽으로 치우진 역방향 직삼각형\n");
	printf("4. 오른쪽으로 치우진 역방향 직삼각형\n");
	printf("5. 정삼각형\n");

	printf("별찍기 선택: ");
	scanf_s("%d", &select);

	if (select == 1 || select == 2 || select == 3 || select == 4 || select == 5) {
		int n = 0;
		printf("행의 개수를 입력해주세요: ");
		scanf_s("%d", &n);

		if (select == 1) {
			star1(n);
		}
		else if (select == 2) {
			star2(n);
		}
		else if (select == 3) {
			star3(n);
		}
		else if (select == 4) {
			star4(n);
		}
		else if (select == 5) {
			star5(n);
		}
		else {
			printf("해당번호는 지원 안해요\n");
		}
	}
		/*int n = 0;
		int i = 0, j = 0, k = 0;
		printf("출력할 별의 수를 입력하세요: ");
		scanf_s("%d", &n);

		for (int i = 0; i < n; i++) {
			for (int j)
		}*/
}


void star1(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void star2(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

}

void star3(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void star4(int n) {
	for (int i = 0; i < n; i++) {
		for (int i = 0; i < n; i++) {
			printf(" ");
		}
		for (int j = 0; j < n - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

}
void star5(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			printf(" ");
		}
		for (int j = 0; j < n + 1; j++) {
			printf("*");
		}
	}
	printf("\n");
}


//void main() {
//	int n = 0;
//	int m = 5;
//	int i = 0, j = 0, k = 0;
//	printf("출력할 별의 수를 입력하세요: ");
//	scanf_s("%d", &n);
//	//int i = 0;
//
//	for (int i = 0; i < n; i++) { //전체 지역
//		for (int j = 0; j < i + 1; j++) { //안에서 쓴 후에 밖에서 쓸 수가 있다.
//			printf("*");// 로컬 지역
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	//int i = 0;
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5 - i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (int i = 0; i < 5; i++) {
//		for (int k = 1; k < 5 - i; k++) { //공백이 4번 찍혀야 된다.
//			printf(" ");
//		}
//		for (int j = 0; j < i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (int i = 0; i < 5; i++) {
//		for (k = 0; k < i; k++) {
//			printf(" ");
//		}
//		for (j = 0; j < 5 - i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < m - i; j++) {
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}

//#include <stdio.h>
//int main()
//{
//	int a[] = { 55, 77, 2, 66, 99, 88, 5, 92, 33, 44 };
//	int max, min, i;
//	max = 0; // 최대값: 범위 내에서 가장 작은 값으로 초기화
//	min = 100; // min=2147483649, 최소값: 범위 내에서 가장 큰 값으로 초기화
//
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] > max) max = a[i]; // 더 큰값을 최대값으로 한다.
//		if (a[i] < min) min = a[i]; // 더 작은 값을 최소값으로 한다.
//	}
//
//	printf("최대값: %d\n", max);
//	printf("최소값: %d\n", min);
//
//	return 0;
//}