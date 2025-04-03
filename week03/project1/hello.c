#include <stdio.h>
#include <stdlib.h> // 랜덤함수 있는 곳 사실 안써도 됨 
#include <time.h> // 타임함수 들어있는곳  
#define SIZE 10

int findmin(int scores[]) {
	int min = scores[0]; 
	for (int i = 0; i < SIZE; i++) {

		if (scores[i] < min) {
			min = scores[i];
		}
	}

	return min;
}

int main() {
	
	int scores[SIZE] = { 0 }; int yourscores[SIZE];
	// 하나만 값을 주면 나머지는 다 0이 된다 
	int sum = 0; int i = 0; int min = 0; 
	int max = 0; 
	srand((unsigned)time(NULL));
	for (int i = 0; i < SIZE; i++) {

		scores[i] = rand() % 100;
		printf("%d ", scores[i]);
		
	}
	printf("\n");
	printf("%d", findmin(scores));
	printf("\n");
	
}



// int t = (unsigned)time(NULL); printf("%d ", t);
	 /* srand((unsigned)time(NULL)); //  unsigned 붙이면 랜덤하게
	for (i = 0; i < SIZE; i++) {
		scores[i] = rand()%100 ;
		// sum = sum + scores[i]; //다 더해서 평균 구하려면 ㅇㅇ
	} */
/* for (i = 0; i < SIZE; i++) {
	sum = sum + scores[i];
} */