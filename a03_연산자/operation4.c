#include<stdio.h>

void main() {
	/*
		����(����)�����ڸ� Ȱ��
		score(����) = 80

		grade(����) = 'A'
		score�� 90 ~ 100 ���̸� 'A'
		score�� 80 ~ 89 ���̸� 'B'
		score�� 70 ~ 79 ���̸� 'C'
		score�� 60 ~ 69 ���̸� 'D'
		score�� 0 ~ 59 ���̸� 'F'

		�л��� ������ 80���̰� ������ B�����Դϴ�. <- ���

	*/

	int score = 80;
	char grade = ' ';
	//printf("������ �Է��ϼ���:");
	//scanf("%d", &score);

	grade = !(score > -1 && score < 101) ? 'X' :
		score > 89 ? 'A' :
		score > 79 ? 'B' :
		score > 69 ? 'C' :
		score > 59 ? 'D' : 'F';

	printf("�л��� ������ %d���̰� ������ %c�����Դϴ�.\n", score, grade); //score = %d, grade=%c

	/*grade = score > 89 && score < 101 ? 'A' :
	score > 79 && score < 90 ? 'B' :
	score > 69 && score < 80 ? 'C' :
	score > 59 && score < 70 ? 'D' :
	 'F';

	printf("%d�����Դϴ�.\n", grade);*/

		//(score > 79 ? : 'B' : 'F');
}







