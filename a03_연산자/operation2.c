#include<stdio.h>
#include<stdbool.h>

void main() {
	bool b1 = true;
	bool b2 = false; //조건식 참 또는 거짓: 참이 반환되면 결과1이고, 거짓이 반환되면 결과2이다.

	printf(b2 ? "참입니다.\n" : "거짓입니다.\n");
	printf("%d\n", 10 > 3); //1의 결과를 가지고 온다. 참이면 1이고 거짓이면 0이다.
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