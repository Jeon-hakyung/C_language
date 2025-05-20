#include <stdio.h>


void change(int** pp) {
	static int b = 30;
	*pp = &b;
}
int main() {
	int a = 3, b = 4;
	int* p = &a, * q = &b;
	p == q;
		printf("%d", p == q);
}