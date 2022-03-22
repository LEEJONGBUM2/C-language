#include <stdio.h>

void main() {
	int i = 0;
	int result = 0;

	while (i < 100) {
		result += (i + 1);
		i++;
	}

	for (int i = 0; i < 100; i++) {
		result += (i + 1);
	}
}

//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = n; i > 0; i--)
//		printf("%d\n", i);
//}