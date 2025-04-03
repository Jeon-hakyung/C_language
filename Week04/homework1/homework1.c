#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
int main(void)
{
	int grade[STUDENTS][SUBJECTS];
	int i, j;
	for (i = 0; i < STUDENTS; i++)
		for (j = 0; j < SUBJECTS; j++)
			scanf_s("%d", &grade[i][j]);
	for (i = 0; i < STUDENTS; i++)
	{
		for (j = 0; j < SUBJECTS; j++)
			printf("%d ", grade[i][j]);
		printf("\n");
	}
	// ич
	return 0;
}