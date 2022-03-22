#include<stdio.h>

void main() {
	int n = 0;
	int m = 5;
	int i = 0, j = 0, k = 0;
	printf("출력할 별의 수를 입력하세요: ");
	scanf_s("%d", &n);
	//int i = 0;

	for (int i = 0; i < n; i++) { //전체 지역
		for (int j = 0; j < i + 1; j++) { //안에서 쓴 후에 밖에서 쓸 수가 있다.
			printf("*");// 로컬 지역
		}
		printf("\n");
	}
	printf("\n");

	//int i = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int k = 1; k < 5 - i; k++) { //공백이 4번 찍혀야 된다.
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (k = 0; k < i; k++) {
			printf(" ");
		}
		for (j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}





	/*
		숙제
		*****
		****
		***
		**
		*
			*
		   **
		  ***
		 ****
		*****
		
		*****
		 ****
		  ***
		   **
		    *.
			
			*
		   ***
		  *****
		 *******
		*********
	*/
}