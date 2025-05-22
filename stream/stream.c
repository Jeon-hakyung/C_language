#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	FILE* fp = fopen("student.txt", "w");// 파일타입:포인터

	if (fp == NULL) return 1;
	fputs("앨리스\n",fp);
	fprintf(fp, "Alice\nBob\nCharlie\n"); 
	fclose(fp); // 닫아줘야함 
	fp = fopen("student.txt", "r"); //r=읽기 
	char name[100];
	while (fgets(name, sizeof(name), fp))
	{
		printf("이름: %s", name);
	}
	fclose(fp);
	return 0;
}