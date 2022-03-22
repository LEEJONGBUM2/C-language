#include<stdio.h>

void main() {
	int year = 0;//초기화 값은 0이다.
	printf("년도를 입력하세요: ");
	scanf_s("%d", &year);

	/*if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		printf("윤년입니다.");
	}
	else {
		printf("평년입니다.");
	}*/

	if (year > 0 && year < 4001) {
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
			printf("%d", 1);
		}
		else {
			printf("%d", 0);
		}
	}
	else {
		printf("계산할 수 없는 년도입니다.\n");
	}

}

