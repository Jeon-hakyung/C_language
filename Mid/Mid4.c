#include <stdio.h>

#include <stdlib.h>

int main(void)

{

	int i, min1, min2, A[100];
	int j, temp;
	
	for (i = 0; i < 100; i++)

	{

		A[i] = rand() % 100; printf("%d ", A[i]);

	}



	// ���α׷� �κ� �ۼ� ���⿡ ...
	
	
	
	for (i = 0; i < 99; i++) {
		min1 = i;
		for (j = i + 1; j < 100; j++) {
			if (A[j] < A[min1]) {
				min1 = j;
			}
		}
		temp = A[i];
		A[i] = A[min1];
		A[min1] = temp;

		
	}

	min1 = A[0];
	min2 = A[1];
	
	printf("\n ���ĵ� �迭");
	for (i = 0; i < 100; i++) {
		printf("%d ", A[i]);
	}

	

	printf("\n�ּҰ�= %d, �ι�° �ּҰ�= %d\n", min1, min2);
	
	


}