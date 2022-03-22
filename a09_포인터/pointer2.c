#include<stdio.h>

/*
	kor, eng, math
	
	calcScore()
	total
	avg

	printScore()
	학생 성적 조회
	국어: 90
	영어: 70
	수학: 80
	총점: 240

*/

//int total1(int kor, int eng, int math);
//double average(int total1);
//void printScore(void);
void calcScore(int, int, int, int*, int*);
void printScore(int*, int*, int*, int*, int*);//*는 포인트값 표시를 의미한다.

void main() {
	//printf("세 과목 점수를 입력하세요\n");
	int kor = 90, eng = 70, math = 80, total = 0, avg = 0;
	calcScore(kor, eng, math, &total, &avg); //total하고 average는 주소값을 전달한다.
	printScore(&kor, &eng, &math, &total, &avg);

	//scanf_s("%d %d %d", &kor, &eng, &math);
	//printScore();

	////int total1 = 0;
	//total1 = total(kor, eng, math);
	////double average1;
	//average1 = average(total1);
	//printf("%d %d %d %d %f", kor, eng, math, total1, average1);

}

void calcScore(int kor, int eng, int math, int* total, int* avg) {
	*total = kor + eng + math;
	*avg = *total / 3;
}

void printScore(int* kor, int* eng, int* math, int* total, int* avg) {
	printf("학생 성적 정보\n");
	printf("국어: %d\n", *kor);
	printf("영어: %d\n", *eng);
	printf("수학: %d\n", *math);
	printf("총점: %d\n", *total);
	printf("평균: %d\n", *avg);

}

//int total1(int kor, int eng, int math) {
//	return(kor+eng+math);
//}
//
//double average(int total1) {
//	double average1 = (double)total1 / 3;
//	return average1;
//}
//
//void printScore(void) {
//
//}