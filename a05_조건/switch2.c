#include <stdio.h>

/*
	점수는 0 ~ 100점 사이만 입력가능

	성적이 100 ~ 90 점대면 A학점 출력
	80 점대면 B학점 출력
	70 점대면 C학점 출력
	60 점대면 D학점 출력
	나머지 점수는 F학점 출력
*/

void main() {
	int score = 0;
	char grade = ' ';
	printf("점수를 입력하세요: ");
	scanf_s("%d", &score);

	if(score > -1 && score < 101) {
		switch (score / 10) {
			case 10 :
			case 9 :
				grade = 'A';
				break;
			case 8 :
				grade = 'B';
				break;
			case 7 :
				grade = 'C';
				break;
			case 6 :
				grade = 'D';
				break;
			default :
				grade = 'F';
		}
		printf("%c학점입니다.\n", grade);
	}
	else {
		printf("점수는 0 ~ 100점만 입력할 수 있습니다.\n");
	}

	/*int score = 0;
	char grade;
	
	printf("점수를 입력하세요: ");
	scanf_s("%d", &score);

	switch (score / 10) {
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		case 5:
			printf("F\n");
			break;
		default:
			printf("해당 점수는 존재하지 않습니다.");

	}*/


}
