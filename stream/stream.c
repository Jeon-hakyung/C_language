#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	FILE* fp = fopen("student.txt", "w");
	if (fp == NULL) return 1;
	fprintf(fp, "Alice\nBob\nCharlie\n");
	fclose(fp);
	fp = fopen("student.txt", "r");
	char name[100];
	while (fgets(name, sizeof(name), fp))
	{
		printf("¿Ã∏ß: %s", name);
	}
	fclose(fp);
	return 0;
}