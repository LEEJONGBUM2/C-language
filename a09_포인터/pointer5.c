#include<stdio.h>
//2차원 배열 함수
void check(int* array) {
	printf("%d\n", array);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) { 
			printf("%d\n", *(array + (i*5)+j)); //index가 0번부터 4까지 있다. 0.1이 아니고 1이다.
			//배열은 주소가 옆으로 붙어 있다. array 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19(3*5)+4
		}
	}
}

void main() {
	int num_array[4][5] = {
		{1,0,0,0,0},
		{1,0,1,0,1},
		{0,1,1,1,1},
		{0,0,1,1,0},
	};

	printf("[%d, %d] : 1\n", 1, 1);
	printf("배열 주소 %d\n", num_array);
	printf("다음 배열주소 %d\n", num_array+1);
	printf("배열 컬럼(세로) 다음주소 %d\n", *num_array+1);
	printf("%d\n", **num_array);
	printf("\n");

	check(num_array);
}