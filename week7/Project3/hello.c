#include <stdio.h>
int fact(int);

int main(void)

{

	int n = 5;

	printf("%d\n", fact(n));

	return 0;

}

int fact(int k) {

	if (k == 1) return 1;
	else return (k * fact(k - 1));
}