#include<stdio.h>

/*
	�Լ���?
	����̴�.
	�Է�, ���, ���๮
	�Է�(�Ű�����)
	���(��ȯ)

	�Լ��� ������ ������ ���ǰ� �Ǿ� �־�� �Ѵ�.

	void -> �����ϴ�, ����ִ�, �ƹ��� �ǹ̰� ����
	void �϶��� return�� �Ҽ��� �ִ�.

	�Լ��� ����
	�����ڷ��� �Լ���(�Ű�����1, �Ű�����2, ...){
		���๮
		<���� �ڷ����� ���� ��� ��, �����ڷ����� void�� �ƴ� ���>
		return ��;
	}
*/
int sum3(int x, int y, int z); //�߻�޼ҵ� abstract
void sum2(int x, int y);
void sum(int num1, int num2);
void test();

void main() {
	test(); //�Լ� ȣ��(call)
	sum(10, 20);
	sum2(0, 2);
	int result = sum3(0, 2, 3); 
	printf("sum3: %d\n", result);
	printf("�Լ� ȣ�� ��.\n"); //printf�� �Լ��̴�.
	//sum2(20, 30);

}

int sum3(int x, int y, int z) {
	if (x == 0) {
		return 0; //void �϶� return ������ �ǹ��Ѵ�.
	}
	return x + y + z;
}

//void test() {
//	printf("�׽�Ʈ �Լ� ȣ��");
//}

void sum2(int x, int y) {
	if (x == 0) {
		return; //void �϶� return ������ �ǹ��Ѵ�.
	}
	int z = x + y;
	printf("sum2: %d\n", z);
}

void sum(int num1, int num2) {
	printf("�� ���� ���� %d�Դϴ�.\n", num1 + num2); //x + y = z
}

void test() { //�Լ� ����
	printf("�׽�Ʈ �Լ� ȣ��\n");
}