#include<stdio.h>

void main() {
	int studentYear = 1;
	int studentGroup = 1;

	printf("2022��");
	printf("�г�: %d\n", studentYear);
	printf("��: %d\n", studentGroup);

	//studentYear = studentYear + 1; //ctrl+shift+�������� ����Ѵ�.
	studentYear++;
	
	//studentGroup = studentGroup + 1; //ctrl+d �� ������ �����Ѵ�.
	studentGroup; //�տ� ������ ��� �����Ѵ� (������). �ڿ� ���̸� �� ������ ������ (������) 

	printf("2023��");
	printf("�г�: %d\n", studentYear);
	printf("��: %d\n", ++studentGroup);
}