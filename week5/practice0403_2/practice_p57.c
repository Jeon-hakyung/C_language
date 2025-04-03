// 포인터와 함수의 관계
#include <stdio.h>
void sub(int b[], int n);
int main(void)
{
	int a[3] = { 1,2,3 };
	printf("%d %d %d\n", a[0], a[1], a[2]);
	sub(a, 3);
	// 매개변수로 배열의 이름=시작주소를 준거임

	printf("%d %d %d\n", a[0], a[1], a[2]);
	return 0;
}
void sub(int b[], int n)
{
	// int *b도 가능할까? =>네.
	// int b[] , int *b 같음
	b[0] = 4; // *b=4; <- 이렇게 써도된다는거야 
	b[1] = 5; // *b=5;
	b[2] = 6; // *b=6; 
}