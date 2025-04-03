#include <stdio.h>
void f(void); // 함수 원형 정의
int main(void)
{
	int z = 0;
	for (z = 0; z < 20; z++) {
		f();
	}

	return 0;
}
void f(void)
{
	static int x = 0;
	int y = 0;
	x++; y++;
	printf("x = %d, y = %d\n", x, y);
}