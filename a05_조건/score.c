#include<stdio.h>

void main() {
	char grade;
	int score;

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &score);

	if (score < 101 && score > 0) {
		if (score > 89 && score < 101) {
			printf("%d���� A�����Դϴ�.\n", score);
		}
		else if (score > 79 && score < 91) {
			printf("%d���� B�����Դϴ�.\n", score);
		}
		else if (score > 69 && score < 81) {
			printf("%d���� C�����Դϴ�.\n", score);
		}
		else if (score > 59 && score < 71) {
			printf("%d���� D�����Դϴ�.\n", score);
		}
		else {
			printf("%d���� F�����Դϴ�.\n", score);
		}
	}
	else {
		printf("��� ����!");
	}

	/*if (score > 89 && score < 101) {
		printf("%d���� A�����Դϴ�.\n", score);
	}
	else if (score > 79 && score < 91) {
		printf("%d���� B�����Դϴ�.\n", score);
	}
	else if (score > 69 && score < 81) {
		printf("%d���� C�����Դϴ�.\n", score);
	}
	else if (score > 59 && score < 71) {
		printf("%d���� D�����Դϴ�.\n", score);
	}
	else {
		printf("%d���� F�����Դϴ�.\n", score);
	}*/
}

//#include<stdio.h> int main(void) { 
// double x, y; 
// printf("x��ǥ�� �Է��ϼ��� : ");
//scanf_s("%lf", &x); // 
// �Ǵ� scanf printf("y��ǥ�� �Է��ϼ��� : "); 
// scanf_s("%lf", &y); //
//�Ǵ� scanf (x > 0 && y > 0) 
// ? printf("1��и�\n")
//	: printf(""); 
//(x < 0 && y > 0) 
// ? printf("2��и�\n") 
//	: printf(""); (x < 0 && y < 0)
//  ? printf("3��и�\n") : 
//	printf(""); (x > 0 && y < 0) 
// ? printf("4��и�\n")
//	: printf(""); return 0; }


