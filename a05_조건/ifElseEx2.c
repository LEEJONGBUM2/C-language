#include<stdio.h>

void main() {
	/*
		grade = 'A'
		score = 80;

		만약 A타입 시험이면서 score가 80점 이상이면
		A타입 시험에 합격하였습니다.
		B타입 시험이면 70점 이상일때
		B타입 시험에 합격하였습니다.
		아니면
		A타입 시험에 불합격하였습니다.

	*/
	/*int score = 80;
	char grade = ' ';*/

	char grade = 'B';
	int score = 64;
	/*printf("점수를 입력하시오 :"); 
	scanf("%d", &score);
	printf("등급을 입력하시오 :");
	scanf("%d", &grade);*/
	//if ((grade == 'A' && score > 79) || (grade == 'B' && score > 69)) {
	if ((grade == 'A' && score > 79)) {
		printf("%c타입 시헙에 합격하였습니다.", grade);
	}
	else {
		if (grade == 'B' && score > 69) {
			printf("%c타입 시헙에 합격하였습니다.", grade);
		}
		else {
			printf("%c타입 시험에 불합격하였습니다.", grade);
		}
	}
	/*(score >= 80 && grade == 'A') ? printf("A타입 시험에 합격하였습니다.") :
		printf("A타입 시험에 불합격 하였습니다.");*/

}

