#include<stdio.h>

void main() {
	/*
		삼항(조건)연산자를 활용
		score(정수) = 80

		grade(문자) = 'A'
		score가 90 ~ 100 사이면 'A'
		score가 80 ~ 89 사이면 'B'
		score가 70 ~ 79 사이면 'C'
		score가 60 ~ 69 사이면 'D'
		score가 0 ~ 59 사이면 'F'

		학생의 점수는 80점이고 평점은 B학점입니다. <- 출력

	*/

	int score = 80;
	char grade = ' ';
	//printf("점수를 입력하세요:");
	//scanf("%d", &score);

	grade = !(score > -1 && score < 101) ? 'X' :
		score > 89 ? 'A' :
		score > 79 ? 'B' :
		score > 69 ? 'C' :
		score > 59 ? 'D' : 'F';

	printf("학생의 점수는 %d점이고 평점은 %c학점입니다.\n", score, grade); //score = %d, grade=%c

	/*grade = score > 89 && score < 101 ? 'A' :
	score > 79 && score < 90 ? 'B' :
	score > 69 && score < 80 ? 'C' :
	score > 59 && score < 70 ? 'D' :
	 'F';

	printf("%d학점입니다.\n", grade);*/

		//(score > 79 ? : 'B' : 'F');
}







