#include<stdio.h>

void main() {
	/*
		grade = 'A'
		score = 80;

		���� AŸ�� �����̸鼭 score�� 80�� �̻��̸�
		AŸ�� ���迡 �հ��Ͽ����ϴ�.
		BŸ�� �����̸� 70�� �̻��϶�
		BŸ�� ���迡 �հ��Ͽ����ϴ�.
		�ƴϸ�
		AŸ�� ���迡 ���հ��Ͽ����ϴ�.

	*/
	/*int score = 80;
	char grade = ' ';*/

	char grade = 'B';
	int score = 64;
	/*printf("������ �Է��Ͻÿ� :"); 
	scanf("%d", &score);
	printf("����� �Է��Ͻÿ� :");
	scanf("%d", &grade);*/
	//if ((grade == 'A' && score > 79) || (grade == 'B' && score > 69)) {
	if ((grade == 'A' && score > 79)) {
		printf("%cŸ�� ���鿡 �հ��Ͽ����ϴ�.", grade);
	}
	else {
		if (grade == 'B' && score > 69) {
			printf("%cŸ�� ���鿡 �հ��Ͽ����ϴ�.", grade);
		}
		else {
			printf("%cŸ�� ���迡 ���հ��Ͽ����ϴ�.", grade);
		}
	}
	/*(score >= 80 && grade == 'A') ? printf("AŸ�� ���迡 �հ��Ͽ����ϴ�.") :
		printf("AŸ�� ���迡 ���հ� �Ͽ����ϴ�.");*/

}

