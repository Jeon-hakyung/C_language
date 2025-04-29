#include <stdio.h>
int main()
{
	int arr[3] = { 10, 20, 30 };
	int* p = arr;
	int v1, v2, v3, v4;

	v1 = *p++;
	printf("v1 = %d p = %d\n", v1, p);
	v2 = (*p)++;
	printf("v2 = %d p = %d\n", v2, p);
	v3 = *++p;
	printf("v3 = %d p = %d\n", v3, p);
	v4 = ++*p;
	printf("v4 = %d p = %d\n", v4, p);

	return 0;


}