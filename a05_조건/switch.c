#include <stdio.h>

void main() {
	char select = '3';
	//int select = 3;

	switch (select) { //��ȣ���� �ڷ����̶� ��ġ�� �ؾ� �ȴ�.
		case '1' :
			printf("1�� ����\n");
			printf("1�� ����\n");
			printf("1�� ����\n");
			printf("1�� ����\n");
			printf("1�� ����\n");
			printf("1�� ����\n");
			printf("1�� ����\n");
			if (select % 2 == 0) {
				break;
			}
			//break; // �� ��쿡�� case 2,3, 10 �� ���� ���� �ʴ´�.
		case '2' :
			printf("2�� ����\n");
			break;
		case '3' :
			printf("3�� ����\n");
			break;
		case '10' :
			printf("10�� ����\n");
			break;
		default :
			printf("�ش� case �� �������� �ʽ��ϴ�.\n");
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
//printf("���������� �Է��ϼ���.\n");
//scanf("%d", &kor);  fflush(stdin);
//printf("���������� �Է��ϼ���.\n");
//scanf("%d", &eng);  fflush(stdin);
//
//
//
//sum = kor + eng;
//avg = (double)sum / 2;
//
//
//printf("���� ���� : %d ���� ���� : %d \n", kor, eng);
//printf("���� : %d  ��� : %.1f \n", sum, avg);
//
//
//
//if (avg >= 90) { printf("���� : A \n"); }     //if(avg>=90){grade='A';}
//else if (avg >= 80) { printf("���� : B \n"); }
//else if (avg >= 70) { printf("���� : C \n"); }
//else if (avg >= 60) { printf("���� : D \n"); }
//else if (avg < 60) { printf("���� : %c \n", grade); }
//else printf("������ �ٽ� �Է� �ϼ���. \n");