#include <stdio.h>

int main(void) {

	char name[100];
	char address[100];

	puts("이름을 입력하세요: "); // printf("이름을 입력하세요: "); 
	gets(name); // scanf_s("%s", name,100); 
	puts("현재 거주하는 주소를 입력하세요:");
	gets(address); // scanf("%s", address); // scanf_s("%s",address,100); 

	printf("안녕하세요, %s에 사는 %s씨. \n", address, name);
	return 0;
}