#include <stdio.h>
#include <stdbool.h>

void main() {
	int n = 0, n2 = 0, a = 0, b = 0, c = 0, count = 0;
	printf("수를 입력하세요: ");
	scanf_s("%d", &n);
	n2 = n;
	do {
		a = n2 < 10 ? 0 : n2 / 10;
		/*if (n2 < 10) {
			a = 0;
		}
		else{
			a = n2 / 10;
		}*/
		//a = n2 / 10;
		printf("a: %d\n", a);
		b = n2 % 10;
		printf("b: %d\n", b);
		c = a + b;
		n2 = (b * 10) + (c % 10); 
		printf("n2: %d\n", n2);
		count++;
	} while (n != n2);
		printf("%d의 사이클: %d\n", n, count);

	/*int a = 0;
	int b = 0;
	int x = 0;
	int total = 0;
	int count = 0;

	printf("원하는 숫자를 입력하세요: ");
	scanf_s("%d\n", &x);

	while (true) {
		a = x / 10;
		b = x % 10;
		total = (a + b) % 10;
		x = (b * 10) + total;
		count++;
	}
	print("%d\n", total);*/
}