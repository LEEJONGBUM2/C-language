#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {
	srand(time(NULL)); //srand�� �ǹ̰� �ִ�.
	int random = 0;
	for (int i = 0; i < 10; i++) {
		random = rand()%9; //������ 9���� ���Ҷ� 0���� 8������ ���´ٰ� �����ϸ� �ȴ�.
		printf("%d\n", random);

	}
}

//int randomInt(int rangeFrom, int rangeTo);
//int maxIntArray(const int array[], int count);
//int minIntArray(const int array[], int count);
//
//int main(int argc, char const* argv[])
//{
//    srand(time(NULL));
//
//    // �������� Ű�� ����
//
//    int* height; // Ű�� �����ϴ� �迭
//    int count = 7; // �ο� 7��
//    int random;
//
//    height = calloc(count, sizeof(int));
//    for (int i = 0; i < count; i++)
//    {
//        height[i] = randomInt(145, 200); // 145cm ���� 200cm ���� �������� Ű�� ����
//        printf("height[%d] : %d cm\n", i, height[i]);
//    }
//    printf("���� Ű�� ū ����� %d cm �̴�.\n", maxIntArray(height, count));
//    printf("���� Ű�� ���� ����� %d cm �̴�.\n", minIntArray(height, count));
//    free(height);
//
//    return 0;
//}
//
//int randomInt(int rangeFrom, int rangeTo) {
//    int random = rand() % (rangeTo - rangeFrom + 1) + rangeFrom;
//    return random;
//}
//int maxIntArray(const int array[], int count) {
//    int max = array[0];
//    for (int i = 1; i < count; i++)
//    {
//        if (array[i] > max) max = array[i];
//    }
//    return max;
//}
//
//int minIntArray(const int array[], int count) {
//    int min = array[0];
//    for (int i = 1; i < count; i++)
//    {
//        if (array[i] < min) min = array[i];
//    }
//    return min;
//}