#include<stdio.h>

void main() {
	int studentYear = 1;
	int studentGroup = 1;

	printf("2022년");
	printf("학년: %d\n", studentYear);
	printf("반: %d\n", studentGroup);

	//studentYear = studentYear + 1; //ctrl+shift+슬래쉬를 사용한다.
	studentYear++;
	
	//studentGroup = studentGroup + 1; //ctrl+d 가 한줄을 복사한다.
	studentGroup; //앞에 붙으면 즉시 증가한다 (선증가). 뒤에 붙이면 그 다음에 증가됨 (후증가) 

	printf("2023년");
	printf("학년: %d\n", studentYear);
	printf("반: %d\n", ++studentGroup);
}