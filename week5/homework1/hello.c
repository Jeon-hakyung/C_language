#include <stdio.h>
int main(void)
{
	int i = 100;
	int* pi = NULL;
	pi = &i; // ��
	// ��
	printf("i = %d\n", i);
	printf("i = %d\n", *pi);
	printf("i�� �ּ�= %p\n", &i);
	printf("i�� �ּ�= %p\n", pi);
	return 0;
}