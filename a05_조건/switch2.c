#include <stdio.h>

/*
	������ 0 ~ 100�� ���̸� �Է°���

	������ 100 ~ 90 ����� A���� ���
	80 ����� B���� ���
	70 ����� C���� ���
	60 ����� D���� ���
	������ ������ F���� ���
*/

void main() {
	int score = 0;
	char grade = ' ';
	printf("������ �Է��ϼ���: ");
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
		printf("%c�����Դϴ�.\n", grade);
	}
	else {
		printf("������ 0 ~ 100���� �Է��� �� �ֽ��ϴ�.\n");
	}

	/*int score = 0;
	char grade;
	
	printf("������ �Է��ϼ���: ");
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
			printf("�ش� ������ �������� �ʽ��ϴ�.");

	}*/


}
