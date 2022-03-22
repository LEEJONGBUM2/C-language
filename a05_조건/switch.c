#include <stdio.h>

void main() {
	char select = '3';
	//int select = 3;

	switch (select) { //괄호안의 자료형이랑 일치를 해야 된다.
		case '1' :
			printf("1번 선택\n");
			printf("1번 선택\n");
			printf("1번 선택\n");
			printf("1번 선택\n");
			printf("1번 선택\n");
			printf("1번 선택\n");
			printf("1번 선택\n");
			if (select % 2 == 0) {
				break;
			}
			//break; // 이 경우에는 case 2,3, 10 이 실행 되지 않는다.
		case '2' :
			printf("2번 선택\n");
			break;
		case '3' :
			printf("3번 선택\n");
			break;
		case '10' :
			printf("10번 선택\n");
			break;
		default :
			printf("해당 case 는 존재하지 않습니다.\n");
	}
}

//int score;
//
//scanf("%d", &score);
//
//switch (score / 10)
//{
//case 10:
//case 9: printf("A\n"); break;
//case 8: printf("B\n"); break;
//case 7: printf("C\n"); break;
//default: printf("F\n");
//}

//int kor = 0, eng = 0, sum = 0;
//double avg = 0.0;
//char grade = 'F';
//
//printf("국어점수를 입력하세요.\n");
//scanf("%d", &kor);  fflush(stdin);
//printf("영어점수를 입력하세요.\n");
//scanf("%d", &eng);  fflush(stdin);
//
//
//
//sum = kor + eng;
//avg = (double)sum / 2;
//
//
//printf("국어 점수 : %d 영어 점수 : %d \n", kor, eng);
//printf("총점 : %d  평균 : %.1f \n", sum, avg);
//
//
//
//if (avg >= 90) { printf("학점 : A \n"); }     //if(avg>=90){grade='A';}
//else if (avg >= 80) { printf("학점 : B \n"); }
//else if (avg >= 70) { printf("학점 : C \n"); }
//else if (avg >= 60) { printf("학점 : D \n"); }
//else if (avg < 60) { printf("학점 : %c \n", grade); }
//else printf("점수를 다시 입력 하세요. \n");