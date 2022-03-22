#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {
	srand(time(NULL)); //srand가 의미가 있다.
	int random = 0;
	for (int i = 0; i < 10; i++) {
		random = rand()%9; //나머지 9값을 구할때 0부터 8까지가 나온다고 생각하면 된다.
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
//    // 랜덤으로 키를 생성
//
//    int* height; // 키를 저장하는 배열
//    int count = 7; // 인원 7명
//    int random;
//
//    height = calloc(count, sizeof(int));
//    for (int i = 0; i < count; i++)
//    {
//        height[i] = randomInt(145, 200); // 145cm 에서 200cm 까지 무작위로 키를 생성
//        printf("height[%d] : %d cm\n", i, height[i]);
//    }
//    printf("가장 키가 큰 사람은 %d cm 이다.\n", maxIntArray(height, count));
//    printf("가장 키가 작은 사람은 %d cm 이다.\n", minIntArray(height, count));
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