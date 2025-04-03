#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
int main(void)
{
	int grade[STUDENTS][SUBJECTS] = {
		{50, 50, 50}, {60,60,60},{70,70,70},{80,80,80},
		{90,90,90} };
	int i, j;
	for (i = 0; i < STUDENTS; i++) {
		for (j = 0; j < SUBJECTS; j++) {
			printf("%d ", grade[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < STUDENTS; i++)
	{
		int sum = 0;
		int average = 0;
		printf("Æò±Õ: ");
		for (j = 0; j < SUBJECTS; j++) {
			sum = sum + grade[i][j];
			
		}
		average = sum / 3;
		printf("%d ", average);
		printf("\n");
	}
	// ¨ç
	return 0;
}