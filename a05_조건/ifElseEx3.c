#include<stdio.h>

void main() {
	/*
		두 수를 입력받는다.
		두수중에 큰 값을 출력하시오.
	*/
	int x = 0;
	int y = 0;

	printf("두 수를 입력해주세요.\n");
	printf("x를 입력하세요:");
	scanf_s("%d", &x);
	rewind(stdin); //버퍼가 생긴다.
	printf("y를 입력하세요:");
	scanf_s("%d", &y);
	rewind(stdin);
	//printf("y를 입력하세요:");
	//scanf_s("%d", &y);
    if (x > y) {
        printf("%d의 수가 더 큽니다.\n", x);
    }
    else {
        printf("%d의 수가 더 큽니다.\n", y);
    }

	
}







//int main()
//{
//    int a = 0, b = 0;
//    printf("두 개의 정수:");
//    scanf_s("%d %d", &a, &b);//a,b에 두개의 정수를 입력
//    if (a > b)//조건 a가 b보다 크면
//    {
//        printf("%d\n", a);//a를 출력
//    }
//    else//그렇지 않으면
//    {
//        printf("%d\n", b);//b를 출력
//    }
//    return 0;