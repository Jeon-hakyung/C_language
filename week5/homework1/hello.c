#include <stdio.h>
int main(void)
{
	int i = 100;
	int* pi = NULL;
	pi = &i; // ㄧ
	// ㄨ
	printf("i = %d\n", i);
	printf("i = %d\n", *pi);
	printf("i狼 林家= %p\n", &i);
	printf("i狼 林家= %p\n", pi);
	return 0;
}