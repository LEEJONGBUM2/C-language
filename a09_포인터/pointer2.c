#include<stdio.h>

/*
	kor, eng, math
	
	calcScore()
	total
	avg

	printScore()
	�л� ���� ��ȸ
	����: 90
	����: 70
	����: 80
	����: 240

*/

//int total1(int kor, int eng, int math);
//double average(int total1);
//void printScore(void);
void calcScore(int, int, int, int*, int*);
void printScore(int*, int*, int*, int*, int*);//*�� ����Ʈ�� ǥ�ø� �ǹ��Ѵ�.

void main() {
	//printf("�� ���� ������ �Է��ϼ���\n");
	int kor = 90, eng = 70, math = 80, total = 0, avg = 0;
	calcScore(kor, eng, math, &total, &avg); //total�ϰ� average�� �ּҰ��� �����Ѵ�.
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
	printf("�л� ���� ����\n");
	printf("����: %d\n", *kor);
	printf("����: %d\n", *eng);
	printf("����: %d\n", *math);
	printf("����: %d\n", *total);
	printf("���: %d\n", *avg);

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