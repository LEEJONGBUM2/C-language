#include<stdio.h>
#include<stdbool.h>
/*
	논리 연산자
	AND		-> && -> 곱
	OR		-> || -> 합
	NOT		-> !  -> 부정

	true(1), false(0)
	[AND] 모든 조건이 참일때만 참이다, 그리고 조건이 하나라도 거짓이면 무조건 거짓이다.
	true && true && true => true 엔드는 곱셈이다.
	false && false && false => false
	true && false && true => false

	[OR]	모든 조건이 거짓일때만 거짓이다,
			그리고 조건이 하나라도 참이면 무조건 참이다.
	true || true || true => true
	false || false || false => false
	true || false || false => true

	[NOT]	참이면 거짓으로 거짓이면 참으로 변환
	!true	=> false
	!false	=> true
	!(true && false) => true

*/

void main() {
	printf(true || true ? "true\n" : "false\n"); //0이 아니면 전부다 참이다.

	int score = 10;
	score = score + 30;
	printf("%d\n", score);

	score += 30;
	printf("%d\n", score);

	score *= 2;
	printf("%d\n", score);

	score %= 2;
	printf("%d\n", score);
}