#include <stdio.h>

int main(void) {

	char name[100];
	char address[100];

	puts("�̸��� �Է��ϼ���: "); // printf("�̸��� �Է��ϼ���: "); 
	gets(name); // scanf_s("%s", name,100); 
	puts("���� �����ϴ� �ּҸ� �Է��ϼ���:");
	gets(address); // scanf("%s", address); // scanf_s("%s",address,100); 

	printf("�ȳ��ϼ���, %s�� ��� %s��. \n", address, name);
	return 0;
}