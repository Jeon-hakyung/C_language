#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
	char s[80] = ""; int k = 0;
	strcpy(s, "Your number is 2008.");
	printf("입력문자열 =>%s", s);
	int ALPHA[26] = { 0 };
	int DIGIT[10] = { 0 };
	int ETC = 0;
	///
	for (int i = 0; s[i]; i++) {

		if (s[i] >= '0' && s[i] <= '9') {
			k = s[i] - '0'; 
			DIGIT[k]++; 
		}
		else if (s[i] >= 'a' && s[i] <= 'z') {
			k = s[i] - 'a';
			ALPHA[k]++;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z') {
			k = s[i] - 'A';
			ALPHA[k]++;
		}
		else ETC++;

	}
	printf("\nALPHA=>\n");
	for (int i = 0; i < 26; i++) {
		printf("%d ", ALPHA[i]);
		
	
	}
	printf("\nDIGIT=>\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", DIGIT[i]);
	}
	printf("\nETC=>\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", ETC);
	}

}