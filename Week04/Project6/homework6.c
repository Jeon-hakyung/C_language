#include <stdio.h>
#define SIZE 10
int main(void)

{
	// 큰 순서에서 작은 순서대로 
	int list2[10] = { 0 };
	srand((int)time(NULL));
	for (int i = 0; i < SIZE; i++) {
		list2[i] = rand() % 100;
		printf("%d \n", list2[i]);
	}
	int bigindex = 0;
	int temp = 0;
	// step1
	for (int j = 0; j < SIZE - 1; j++) {
		bigindex = j;
		for (int i = j; i < SIZE; i++) {
			// 가장 작은것을 찾는 알고리즘 
			if (list2[bigindex] < list2[i]) {
				bigindex = i;
			}
		}
		printf("big => %d \n", bigindex);
		temp = list2[j];
		list2[j] = list2[bigindex];
		list2[bigindex] = temp;

		for (int i = 0; i < SIZE; i++)
			printf("%d ", list2[i]);
	}



}