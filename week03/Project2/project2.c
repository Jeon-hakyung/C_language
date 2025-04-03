#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5 
void f(int s[]);

int main(void)
{
	int grade[SIZE]; int sum = 0; 
	int HAP[SIZE+1] = { 0 }; int k = 0; 
	int average,i;
	printf("5명의 성적을 입력하시오\n");
	
	for (int i = 0; i < SIZE; i++) {
		scanf_s("%d", &grade[i]);
	}
	for (int i = 0; i < SIZE; i++) {
		k = grade[i] / 10;
		HAP[k] = HAP[k] + 1;
	}
	printf("점수대    인원수\n");
	for (int i = 0; i < SIZE+1; i++) {
		printf("%d ~%d : %d\n", i*10, (i+1)*10, HAP[i]);
	}

	return 0;
}
