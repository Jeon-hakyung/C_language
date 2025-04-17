#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// 문자열의 배열 
	int i;
	char menu[5][10];
	for (i = 0; i < 5; i++) {
		gets(menu[i]); 
		//scanf_s("%s", menu[i]);
	}

	for (i = 0; i < 5; i++)
		printf("%d 번째 메뉴: %s \n", i, menu[i]);
	return 0;
}