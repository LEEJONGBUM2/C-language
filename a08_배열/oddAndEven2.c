#include<stdio.h>

/*
	����
	�迭 numArray = {0};
	�ݺ����� ����Ͽ���
	numArray[0] = [49]
	5 * i
	0 = ¦
	5 = Ȧ
	10 = ¦
	char[3] oddAndEvenValue = 'Ȧ';

	%s
*/

void main() {
	int numArray[50] = { 0 }; //0���� �ʱ�ȭ�� �ϴ°Ŵ�. ���Ϳ� 0�ǰ��� �ְڴ�. int 4����Ʈ���� �迭 50�� ��� 0���� ���� �ʱ�ȭ
	for (int i = 0; i < 50; i++) {
		numArray[i] = 5 * i; //
		if (numArray[i] % 2 == 0) {
			printf("%d = ¦\n", numArray[i]);
		}
		else {
			printf("%d = Ȧ\n", numArray[i]);
		}
	}
	/*for (int i = 0; i < 50; i++) {
		if (numArray[i] % 2 == 0) {
			printf("%d = ¦\n", numArray[i]);
		}
		else {
			printf("%d = Ȧ\n", numArray[i]);
		}
	}*/
}