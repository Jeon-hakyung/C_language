#include <stdio.h>
int main(void)

{

	char s[500] = "A computer is a General purpose device��";

	int f[26] = { 0 }; // �󵵰�� �迭
	int k = 0;

	int i;



	// ���⿡ �ڵ� �ۼ�...
	for (i = 0; s[i] != 0; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			k = s[i] - 'a';
			f[k]++;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z') {
			k = s[i] - 'A';
			f[k]++;
		}
	}


	for (i = 0; i < 26; i++)  // ������

		printf("%c %d, ", i + 'a', f[i]);

	printf("\n");

}