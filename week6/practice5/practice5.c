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
	puts("비밀번호를 입력하시오...");
	gets(pass);
	int len = strlen(pass); //길이 확인해주는함수
	if (len >= 7) ok = 1; 

	for (int i = 0; i < len; i++) {
		if (islower(pass[i]) > 0) {
			small = 1; // 소문자 체크 
		}
		if (isupper(pass[i]) > 0) {
			big = 1; // 대문자 체크 
		}
		if (isdigit(pass[i]) > 0) {
			num = 1; // 대문자 체크 
		}
		
	}


	if (ok ==1 && small==1 && big==1 & num==1 ) {
		printf("비밀번호 => %s \n 적합합니다.", pass);
	}
	else {
		printf("비밀번호 => %s \n 부적합합니다.", pass);
	}


	
	
}