#include <stdio.h>

int main(void) {

	char src[] = "Action speaks louder than words";
	char dst[100];

	int i;
	printf("���� ���ڿ�:%s\n", src);
	for (i = 0; src[i] != NULL; i++) {
		dst[i] = src[i];
	}

	dst[i] = '\0';
	printf("����� ���ڿ�:%s\n", dst);

	return 0; 
}