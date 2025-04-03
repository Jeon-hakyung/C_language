#include <stdio.h>
#define SIZE 10
int main(void)
{
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
	int smallindex = 0;
	int temp = 0;
	// step1
	for (int j = 0; j < SIZE - 1; j++) {
		smallindex = j; 
		for (int i = j; i < SIZE; i++) {
			// 가장 작은것을 찾는 알고리즘 
			if (list[smallindex] > list[i]) {
				smallindex = i;
			}
		}
		printf("smail => %d \n", smallindex);
		temp = list[j];
		list[j] = list[smallindex];
		list[smallindex] = temp;

		for (int i = 0; i < SIZE; i++)
			printf("%d ", list[i]);
	}



	/*for (int i = 0; i < SIZE; i++)
		printf("%d ", list[i]);*/

}