#include<stdio.h>

/*
	3개의 수를 입력받는다.

	[최대값 최소값 출력 프로그램]
	1. 최대값 출력
	2. 최소값 출력

	maxFunction()
	1, 3, 2
	최대값은 3입니다.

	minFunction()
	최소값은 1입니다.
*/

void maxFunction(int x, int y, int z);
void minFunction(int x, int y, int z);

void main() {
	int x = 0, y = 0, z = 0, select = 0;
	printf("3개의 수를 입력하세요: ");
	scanf_s("%d %d %d", &x, &y, &z);

	printf("[최대값 최소값 출력 프로그램]\n");
	printf("1. 최대값\n");
	printf("2. 최소값\n");
	printf("선택하세요: ");
	scanf_s("%d", &select);

	if (select == 1) {
		maxFunction(x, y, z);
	}
	else if (select == 2) {
		minFunction(x, y, z);
	}
	else {
		printf("해당 번호는 선택할 수 없습니다.\n");
	}

	/*int max, min, i;
	min = 0;
	max = 0;
	i = 0;

	printf("[최대값 최소값 출력 프로그램]\n");
	printf("1. 최대값 출력\n");
	printf("2. 최소값 출력\n");

	printf("1부터 3 숫자중에 하나를 선택하세요\n");
	scanf_s("%d", &i);

	if (i == 1) {
		maxFunction();
	}*/

}

void maxFunction(int x, int y, int z) {
	int max = 0;

	if (x > y) {
		max = x;
	}
	else {
		max = y;
	}
	if (z > max) {
		max = z;
	}
	printf("최대값은 %d입니다.\n", max);
}
void minFunction(int x, int y, int z) {
	int min = 0;

	if (x > y) {
		min = y;
	}
	else {
		min = x;
	}
	if (z < min) {
		min = z;
	}
	printf("최소값은 %d입니다.\n", min);

}

//int select = 0;
//
//printf("[별찍기 프로그램]\n");
//printf("1. 왼쪽으로 치우진 정방향 직삼각형\n");
//printf("2. 오른쪽으로 치우진 정방향 직삼각형\n");
//printf("3. 왼쪽으로 치우진 역방향 직삼각형\n");
//printf("4. 오른쪽으로 치우진 역방향 직삼각형\n");
//printf("5. 정삼각형\n");
//
//printf("별찍기 선택: ");
//scanf_s("%d", &select);
//
//if (select == 1 || select == 2 || select == 3 || select == 4 || select == 5) {
//	int n = 0;
//	printf("행의 개수를 입력해주세요: ");
//	scanf_s("%d", &n);
//
//	if (select == 1) {
//		star1(n);
//	}
//	else if (select == 2) {
//		star2(n);
//	}
//	else if (select == 3) {
//		star3(n);
//	}
//	else if (select == 4) {
//		star4(n);
//	}
//	else if (select == 5) {
//		star5(n);
//	}
//	else {
//		printf("해당번호는 지원 안해요\n");
//	}
//}
///*int n = 0;
//int i = 0, j = 0, k = 0;
//printf("출력할 별의 수를 입력하세요: ");
//scanf_s("%d", &n);
//
//for (int i = 0; i < n; i++) {
//	for (int j)
//}*/
//}