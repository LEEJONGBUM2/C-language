#include<stdio.h>
#include<stdbool.h>

void main() {
	bool b1 = true;
	bool b2 = false; //���ǽ� �� �Ǵ� ����: ���� ��ȯ�Ǹ� ���1�̰�, ������ ��ȯ�Ǹ� ���2�̴�.

	printf(b2 ? "���Դϴ�.\n" : "�����Դϴ�.\n");
	printf("%d\n", 10 > 3); //1�� ����� ������ �´�. ���̸� 1�̰� �����̸� 0�̴�.
	printf("%d\n", 10 < 3);//0
	printf("%d\n", 10 == 3);//0
	printf("%d\n", 10 != 3);//1

	bool result1 = 10 > 3;
	bool result2 = 10 < 3;
	bool result3 = 10 == 3;
	bool result4 = 10 != 3;

	printf(result1 ? "true\n" : "false\n");
	printf(result2 ? "true\n" : "false\n");
	printf(result3 ? "true\n" : "false\n");
	printf(result4 ? "true\n" : "false\n");

	//printf("%d\n", 10 > 3);
}