#include<stdio.h>

void main() {
	int numbers[4][3] = { 
		{1,2,3}, //1={0,0}, 4={1,0}, 2={0,1}
		{4,5,6}, //바깥 for 문 1,4,7, 안쪽 for 문 1,2,3
		{7,8,9},
		{10,11,12}
	};
	//numbers[0][0,1,2] 0,1,2가 3개있고 int 4바이트라서 4*3=12

	int nums[3] = { 0 };
	sizeof(nums); //int가 3개가 붙었다. (nums)는 배열의 주소이고, 주소의 사이즈가 4*3=12가 나옴, 배열의 시작점이고 배열의 한묶음을 의미한다.

	int numbers_row_size = sizeof(numbers) / sizeof(numbers[0]); //첫번째 배열이 행이다. sizeof(numbers[0])는 행의 한묶음이다. 36/12 = 3
	//(총 숫자개수 12개이고) int가 4바이트라서 12*4=48 이고, 48/12=4

	//sizeof(numbers[0]이것이 행이 주소다.
	int numbers_column_size = sizeof(numbers) / numbers_row_size / sizeof(int); //int 하나의 값이 나오고, 3이라고 하는 갯수가 나온다.
	// (3*4*4)48/4/4

	printf("행(가로)의 개수: %d\n", numbers_row_size); 
	printf("열(세로)의 개수: %d\n", numbers_column_size); //하나의 공간이 int이기때문에 int는 4바이트도 9개 숫자 잇으므로 4*9=36


	for (int i = 0; i < numbers_row_size; i++) {
		for (int j = 0; j < numbers_column_size; j++) {
			printf("index[%d, %d]: %d\n", i, j, numbers[i][j]); //주소 안에 주소가 들어가 있다.
		}
	}
	printf("\n");
	printf("index[%d, %d]: %d\n", 0, 0, numbers[0]);
	printf("index[%d, %d]: %d\n", 0, 0, *numbers[0]);
	printf("index[%d, %d]: %d\n", 0, 0, *(numbers[0]+1));
	printf("index[%d, %d]: %d\n", 0, 0, *(numbers[0] + 2));
	printf("index[%d, %d]: %d\n", 0, 0, *(* (numbers + 1))); //두번째 값에 접근하기 위해서
	printf("index[%d, %d]: %d\n", 0, 0, *(*(numbers + 1) + 1)); 
	printf("index[%d, %d]: %d\n", 0, 0, *(numbers[0] + 3) + 1);

	//주소값 n n자체가 100이고, n+1=104, n+2=108이 된다.
}