#include <stdio.h>

void main() {
	int i = 0;
	int result = 0;
	while (i < 100) { //index �� 0 ���� �����̶�, < ��ȣ�� ����ϴ°��� �ξ� ����ϴ�.
		result += (++i);
		//i++; //���� ��ȭ �����̴�.
		if (i == 50) { //i�� 50�� �Ǵ� ������ while ����� �����.
			break;
		}
	}
	printf("%d", result);
}


//int main(void) {
//	int a, b;
//	while (1) {
//		scanf("%d %d", &a, &b);
//		if (a == 0 && b == 0) break;
//		printf("%d\n", a + b);
//	}
//}

//#include <stdio.h> int main() { int A, B; scanf("%d %d", &A,&B); printf("%d", A + B); return 0; }

//if (0 < A && 10 > B) {
//	printf("%d\n", A + B);
//}
//
//return 0;
//}