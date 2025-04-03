#include <stdio.h>
#define SIZE 5
void array_copy(int* A, int* B, int size);
int main() {

	int score[SIZE];
	int newscore[SIZE] = { 0 };
	int i;

	for (i = 0; i < SIZE; i++) {
		score[i] = rand() % 100;
		printf("%d ", score[i]);
	}
	printf("\n");
	array_copy(score, newscore, SIZE);
	for (i = 0; i < SIZE; i++) {
		printf("%d ", score[i]);
	}
}

void array_copy(int* A, int* B, int size) {

	for (int i = 0; i < SIZE; i++) {
		 
		*(B + i) = *(A + i);
	}

}