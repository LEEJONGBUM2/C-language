#include <stdio.h>

void main() {
	int n = 0;
	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d\n", i + 1);
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", n - 1);
	}

	//int i;
	////printf("���� �Է��ϼ���: ");
	////scanf_s("%d", &i);

	//for (int i = 0; i < 6; i++) {
	//	printf("%d\n", i);
	//}

	//for (int i = 5; i > 0; i--) {
	//	printf("%d\n", i);
	//}
}