#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {

	char pass[100];
	int ok = 0; 
	int small = 0;
	int big = 0;
	int num = 0; 
	puts("��й�ȣ�� �Է��Ͻÿ�...");
	gets(pass);
	int len = strlen(pass); //���� Ȯ�����ִ��Լ�
	if (len >= 7) ok = 1; 

	for (int i = 0; i < len; i++) {
		if (islower(pass[i]) > 0) {
			small = 1; // �ҹ��� üũ 
		}
		if (isupper(pass[i]) > 0) {
			big = 1; // �빮�� üũ 
		}
		if (isdigit(pass[i]) > 0) {
			num = 1; // �빮�� üũ 
		}
		
	}


	if (ok ==1 && small==1 && big==1 & num==1 ) {
		printf("��й�ȣ => %s \n �����մϴ�.", pass);
	}
	else {
		printf("��й�ȣ => %s \n �������մϴ�.", pass);
	}


	
	
}