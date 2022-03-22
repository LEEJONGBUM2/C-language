//#include<stdio.h>
#include "header.h"

extern int sss;

void suma(int a, int b) {
	static int number = 0;
	//int number = 0;

	number++;
	//a++;
	//c = 0;
	//c++;
	result = a + b;

	printf("number: %d\n", number);
	printf("sss: %d\n", sss);
	printf("%d + %d = %d\n", a, b, a + b);
}