// �����Ϳ� �迭�� ����
#include <stdio.h>
int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 }; 
	int* p = a; 
	printf("a = %p\n", a);
	printf("a + 1 = %p\n", a + 1);
	printf("*a = %d\n", *a);
	printf("*(a+1) = %d\n", *(a + 1));

	printf("%p\n", &a[1]); // a[1]�� �ּҰ�
	printf("%p\n",&p[1]);
	printf("%d\n", *(p + 1));
	return 0;
}