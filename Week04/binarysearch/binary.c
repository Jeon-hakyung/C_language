#include <stdio.h>
#define SIZE 16
int binary_search(int list[], int n, int key);
int main(void)
{
	int key; int low = 0, high = 15, middle = 0, index = 0;
	int grade[SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };
	printf("탐색할 값을 입력하시오:");
	scanf_s("%d", &key);
	index = binary_search(grade, 16, key);

	low = 0; high = 15;
 	
	printf("index= %d\n", index);
	return 0;
}

int binary_search(int grade[], int n, int key) {
	
	int low = 0;
	int high = n-1;
	int middle; 
	int index = 0; 
	while (low <= high) {
		middle = (low + high) / 2; // middle 7
		if (grade[middle] == key) {
			index = middle;
			break;

		}
		else if (grade[middle] < key) { // low=8 
			// 오른쪽으로 가야하는 상황
			low = middle + 1;
		}
		else {
			// 왼쪽으로 가야함
			high = middle - 1;
		}

	}

	}
