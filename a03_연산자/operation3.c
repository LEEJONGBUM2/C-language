#include<stdio.h>
#include<stdbool.h>
/*
	�� ������
	AND		-> && -> ��
	OR		-> || -> ��
	NOT		-> !  -> ����

	true(1), false(0)
	[AND] ��� ������ ���϶��� ���̴�, �׸��� ������ �ϳ��� �����̸� ������ �����̴�.
	true && true && true => true ����� �����̴�.
	false && false && false => false
	true && false && true => false

	[OR]	��� ������ �����϶��� �����̴�,
			�׸��� ������ �ϳ��� ���̸� ������ ���̴�.
	true || true || true => true
	false || false || false => false
	true || false || false => true

	[NOT]	���̸� �������� �����̸� ������ ��ȯ
	!true	=> false
	!false	=> true
	!(true && false) => true

*/

void main() {
	printf(true || true ? "true\n" : "false\n"); //0�� �ƴϸ� ���δ� ���̴�.

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