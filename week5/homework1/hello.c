#include <stdio.h>
int main(void)
{
	int i = 100;
	int* pi = NULL;
	pi = &i; // ①
	// ②
	printf("i = %d\n", i);
	printf("i = %d\n", *pi);
	printf("i의 주소= %p\n", &i);
	printf("i의 주소= %p\n", pi);
	return 0;
}