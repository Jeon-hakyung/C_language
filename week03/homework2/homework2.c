#include <stdio.h>
#define SIZE 3
int main(void)
{
	int i;
	int grade[SIZE] = { 10, 20, 30 }; // ич
	for (i = 0; i < SIZE; i++) printf("%d\n", grade[i]);
	return 0;
}