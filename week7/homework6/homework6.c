#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char s1[80]; char s2[80]; char op[80]; int x, y, z;
	printf("문자열을 입력하시오:\n"); scanf("%s %s %s", s1, s2, op);
	if (strcmp("add", op) == 0)
	{
		x = atoi(s1);
		y = atoi(s2); z = x + y;
		printf("연산 결과는 %d입니다\n", z);
	}
	if (strcmp("mul", op) == 0)
	{
		x = atoi(s1);
		y = atoi(s2); z = x * y;
		printf("연산 결과는 %d입니다\n", z);
	}
	if (strcmp("sub", op) == 0)
	{
		x = atoi(s1);
		y = atoi(s2); z = x - y;
		printf("연산 결과는 %d입니다\n", z);
	}
	if (strcmp("div", op) == 0)
	{
		x = atoi(s1);
		y = atoi(s2); z = x / y;
		printf("연산 결과는 %d입니다\n", z);
	}
	return 0;
}