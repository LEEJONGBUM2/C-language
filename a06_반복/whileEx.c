#include <stdio.h>

void main() {
	int i = 0;
	int result = 0;
	while (i < 100) { //index 는 0 부터 시작이라, < 부호를 사용하는것이 훨씬 깔끔하다.
		result += (++i);
		//i++; //조건 변화 수식이다.
		if (i == 50) { //i가 50이 되는 도중이 while 기능을 멈춘다.
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