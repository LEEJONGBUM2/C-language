#include<stdio.h>

void main() {
	/*
		�� ���� �Է¹޴´�.
		�μ��߿� ū ���� ����Ͻÿ�.
	*/
	int x = 0;
	int y = 0;

	printf("�� ���� �Է����ּ���.\n");
	printf("x�� �Է��ϼ���:");
	scanf_s("%d", &x);
	rewind(stdin); //���۰� �����.
	printf("y�� �Է��ϼ���:");
	scanf_s("%d", &y);
	rewind(stdin);
	//printf("y�� �Է��ϼ���:");
	//scanf_s("%d", &y);
    if (x > y) {
        printf("%d�� ���� �� Ů�ϴ�.\n", x);
    }
    else {
        printf("%d�� ���� �� Ů�ϴ�.\n", y);
    }

	
}







//int main()
//{
//    int a = 0, b = 0;
//    printf("�� ���� ����:");
//    scanf_s("%d %d", &a, &b);//a,b�� �ΰ��� ������ �Է�
//    if (a > b)//���� a�� b���� ũ��
//    {
//        printf("%d\n", a);//a�� ���
//    }
//    else//�׷��� ������
//    {
//        printf("%d\n", b);//b�� ���
//    }
//    return 0;