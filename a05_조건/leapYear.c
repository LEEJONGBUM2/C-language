#include<stdio.h>

void main() {
	int year = 0;//�ʱ�ȭ ���� 0�̴�.
	printf("�⵵�� �Է��ϼ���: ");
	scanf_s("%d", &year);

	/*if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		printf("�����Դϴ�.");
	}
	else {
		printf("����Դϴ�.");
	}*/

	if (year > 0 && year < 4001) {
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
			printf("%d", 1);
		}
		else {
			printf("%d", 0);
		}
	}
	else {
		printf("����� �� ���� �⵵�Դϴ�.\n");
	}

}

