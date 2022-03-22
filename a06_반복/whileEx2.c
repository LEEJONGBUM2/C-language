#include <stdio.h>
#include <stdbool.h>

void main() {
	int a;
	int b;

	while (true) { // true는 1과 같은 의미이다.
		printf("두 수를 입력하세요: ");
		scanf_s("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		else {
			printf("%d\n", a + b);
		}
	}
}


//#include<stdio.h>
//int main() {
//    int n, init, count = 0;
//    scanf("%d", &n);
//    init = n;
//    int a, b, c, d;
//    do {
//        a = n / 10;
//        b = n % 10;
//        c = (a + b) / 10;
//        d = (a + b) % 10;
//        n = b * 10 + d;
//        count++;
//    } while (n != init);
//    printf("%d", count);
//}

//#include <stdio.h>
//int main()
//{
//    int N, count = 0;
//    scanf("%d", &N);
//    int A = N;
//    while (1)
//    {
//        N = (N / 10 + N % 10) % 10 + N % 10 * 10, count++;
//        if (N == A)
//        {
//            printf("%d", count);
//            break;
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//    int x;
//    int a, b;
//    int sum = 0;
//    int count = 0;
//    scanf("%d", &x);
//    int num = x;
//    while (1)
//    {
//        a = x / 10;
//        b = x % 10;
//        sum = (a + b) % 10;
//        x = b * 10 + sum;
//        count++;
//        if (num == x)
//        {
//            break;
//        }
//    }
//    printf("%d", count);
//}

