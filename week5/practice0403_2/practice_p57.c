// �����Ϳ� �Լ��� ����
#include <stdio.h>
void sub(int b[], int n);
int main(void)
{
	int a[3] = { 1,2,3 };
	printf("%d %d %d\n", a[0], a[1], a[2]);
	sub(a, 3);
	// �Ű������� �迭�� �̸�=�����ּҸ� �ذ���

	printf("%d %d %d\n", a[0], a[1], a[2]);
	return 0;
}
void sub(int b[], int n)
{
	// int *b�� �����ұ�? =>��.
	// int b[] , int *b ����
	b[0] = 4; // *b=4; <- �̷��� �ᵵ�ȴٴ°ž� 
	b[1] = 5; // *b=5;
	b[2] = 6; // *b=6; 
}