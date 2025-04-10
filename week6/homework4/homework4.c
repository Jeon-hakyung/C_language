#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[100];
	char s2[100];
	char* c;
	int j = 0; 

	puts("문자열을 입력하시오:");
	fgets(s1, sizeof(s1), stdin); // gets(s1);
	for (int i = 0; i < 100; i++) {
		if (s1[i] != ' ') {
			s2[j] = s1[i];
			j++;
		}
		
	}
	printf("s2 : %s", s2);
	

	/*c = strchr(s1, 'a');
	printf("%d\n", (int)(c - s1));
	return 0;*/
}