#include <stdio.h>
#include <stdlib.h> // �����Լ� �ִ� �� ��� �Ƚᵵ �� 
#include <time.h> // Ÿ���Լ� ����ִ°�  
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
	// �ϳ��� ���� �ָ� �������� �� 0�� �ȴ� 
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
	 /* srand((unsigned)time(NULL)); //  unsigned ���̸� �����ϰ�
	for (i = 0; i < SIZE; i++) {
		scores[i] = rand()%100 ;
		// sum = sum + scores[i]; //�� ���ؼ� ��� ���Ϸ��� ����
	} */
/* for (i = 0; i < SIZE; i++) {
	sum = sum + scores[i];
} */