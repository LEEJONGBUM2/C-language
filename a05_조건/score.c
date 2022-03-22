#include<stdio.h>

void main() {
	char grade;
	int score;

	printf("점수를 입력하세요: ");
	scanf_s("%d", &score);

	if (score < 101 && score > 0) {
		if (score > 89 && score < 101) {
			printf("%d점은 A학점입니다.\n", score);
		}
		else if (score > 79 && score < 91) {
			printf("%d점은 B학점입니다.\n", score);
		}
		else if (score > 69 && score < 81) {
			printf("%d점은 C학점입니다.\n", score);
		}
		else if (score > 59 && score < 71) {
			printf("%d점은 D학점입니다.\n", score);
		}
		else {
			printf("%d점은 F학점입니다.\n", score);
		}
	}
	else {
		printf("계산 오류!");
	}

	/*if (score > 89 && score < 101) {
		printf("%d점은 A학점입니다.\n", score);
	}
	else if (score > 79 && score < 91) {
		printf("%d점은 B학점입니다.\n", score);
	}
	else if (score > 69 && score < 81) {
		printf("%d점은 C학점입니다.\n", score);
	}
	else if (score > 59 && score < 71) {
		printf("%d점은 D학점입니다.\n", score);
	}
	else {
		printf("%d점은 F학점입니다.\n", score);
	}*/
}

//#include<stdio.h> int main(void) { 
// double x, y; 
// printf("x좌표를 입력하세요 : ");
//scanf_s("%lf", &x); // 
// 또는 scanf printf("y좌표를 입력하세요 : "); 
// scanf_s("%lf", &y); //
//또는 scanf (x > 0 && y > 0) 
// ? printf("1사분면\n")
//	: printf(""); 
//(x < 0 && y > 0) 
// ? printf("2사분면\n") 
//	: printf(""); (x < 0 && y < 0)
//  ? printf("3사분면\n") : 
//	printf(""); (x > 0 && y < 0) 
// ? printf("4사분면\n")
//	: printf(""); return 0; }


