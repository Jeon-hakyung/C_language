#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	FILE* fp = fopen("student.txt", "w");// ����Ÿ��:������

	if (fp == NULL) return 1;
	fputs("�ٸ���\n",fp);
	fprintf(fp, "Alice\nBob\nCharlie\n"); 
	fclose(fp); // �ݾ������ 
	fp = fopen("student.txt", "r"); //r=�б� 
	char name[100];
	while (fgets(name, sizeof(name), fp))
	{
		printf("�̸�: %s", name);
	}
	fclose(fp);
	return 0;
}