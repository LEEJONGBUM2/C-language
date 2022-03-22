#include<stdio.h> // #이 붙으면 전처리기, standard Input/Output library
// include > 헤더 추가 등의 현재 소스 코드에 추가
// stdio.h 표준 입출력


void main() { //함수 function, 프로그램의 시작점, void 공허하다, 비어있다, 리턴이 없다.
	printf("이름: ");//ctrl + d는 복사하기 이다.
	printf("이종범\n");//ctrl + f5를 누르면 실행이 된다.
	printf("주소: ");//한 문자는 ''사용, 두개 이상의 문자는 ""사용
	printf("부산광역시 부산진구\n");
	printf("직업: ");
	printf("학생\n");
	printf("학년: ");
	printf("1\n\n");
	unsigned int level = 3000000000; //자료형 int, 변수형 level
	printf("%u %u", level, level); //unsigned 약자 u
	int x = 15;
	int y = 20;
	// 15 + 20 = 35
	printf("\n%d + %d = %d\n", x, y, x+y);
	printf("%d\n", 0xf1); //0x0 f=15 a=10 //0x 는 16진수 의미
	printf("%d\n", 071); //0은 8진수를 의미한다.
	printf("%d\n", 027);

	printf("%lf\n", 1.12345);

	char i = 65;
	printf("%d\n", i);
	printf("%d\n", i);
	

	printf("\n이름: ");//ctrl + d는 복사하기 이다.
	printf("이종범\n");//ctrl + f5를 누르면 실행이 된다. 
	printf("주소: ");//한 문자는 ''사용, 두개 이상의 문자는 ""사용
	printf("부산광역시 부산진구\n");
	printf("직업: ");
	printf("학생\n");
	printf("학년: ");
	printf("1\n\n");

	char lineFeed = '\n'; //\n은 엔터를 의미
	char carriageReturn = '\r';
	char tab = '\t'; //\t는 한탭을 의미한다.

	printf("%c%c%c%c\n", 'a', lineFeed, 'b', lineFeed);

	char cc = 'a';
	int ii = cc;
	printf("%d\n", ii);

	int ic = 200;
	char ci = (char)ic; //명시적 형변환
	double d = 3.14; //실수 8바이트에 1바이트에 넣는다. int 4 바이트
	ci = (char)d;

	printf("%d\n", ci);

	int num1 = 3;
	double dnum1 = 1.2;

	int num2 = 4;
	double dnum2 = 1.1;

	printf("%lf + %lf = %lf\n", (double)(num1+(int)dnum1), (double)(num2+(int)dnum2), num1+dnum1+num2+dnum2);

	printf("%lf + %lf = %lf\n", num1 + dnum1, num2 + dnum2, num1 + dnum1 + num2 + dnum2);

	////////////////////////////////////////////////////////////////////////////
	/*
		문제1.
	*/
	double kor = 85.2;
	int kor1 = kor;
	double eng = 79.8;
	int eng1 = eng;
	double math = 95.5;
	int math1 = math;

	//토탈 나누기(/) 3
	int total = (int)kor1+(int)eng1+(int)math1;
	double avg = total/3.0;

	printf("총합 %d\n", total);
	printf("평균 %lf\n", avg);

	//


	//#이 붙으면 전처리기이다. (#define PI) 변수를 선언하는것은 const 이다.
	//const char SAVE_PATH[] = "C:\Program Files"; lf = long float의 줄임말이다. (double)
	//리터럴 정수=int, 실수=double, long과 float, 범위를 더 늘려주기 위해서 double을 사용한다.
	//형변환 문자를 정수로 바꾸고 정수를 실수로 바꿀수가 있다.
	//업캐스팅 작은 물통으로부터 큰 물통 옮김 (문자->정수->실수) 값이 작은 범위에서 큰 범위로의 형 변환, 묵시적 형 변환(형 변환 타입 생략 가능)
	//실수 8바이트, 정수 4바이트, 문자 1 바이트
	//다운캐스팅: 값이 큰 범위에어 작은 범위로의 형 변환, 명시적 형 변환(형 변환 타입 생략 불가능)

}