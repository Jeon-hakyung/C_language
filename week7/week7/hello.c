#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // atoi, atof 
int main() {

	int n=0; 
	char dst[50]="Man is immortal, because he has soul";
	char src[6] = "Hello";
	// strcpy(dst, src);
	/*printf("%s \n", dst);*/
	//printf("%zd \n", strlen(src));
	/*int k = strcmp(dst, src);
	printf("%d \n", k);
	strcat(dst, " Happy ");
	printf("%s\n", src);
	printf("%s\n", dst);*/
	char seps[] = "  ,\t\n"; 
	char* token = strtok(dst,seps);
	printf("%s\n", token); n++;
	while (token != NULL) {
		token = strtok(NULL, "  ,\t\n"); n++;
		printf("%s\n", token);
	}
	n--;
	printf("%d\n", n);

	int k = atoi("253"); /// <stdlib.h> 
	printf("%d\n", k);
	double f = atof("253.4");
	printf("%lf\n", f);
}

