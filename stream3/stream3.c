#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student
{
	char name[20];
	int score;
};
int main()
{
	struct Student s1 = { "ȫ�浿", 90 };
	FILE* fp = fopen("struct.dat", "wb");
	fwrite(&s1, sizeof(struct Student), 1, fp);
	// ù��° �Ű������±���ü���ּҰ� 

	fclose(fp);

	struct Student s2;
	fp = fopen("struct.dat", "rb");
	fread(&s2, sizeof(struct Student), 1, fp);
	fclose(fp);
	printf("�̸�: %s, ����: %d\n", s2.name, s2.score);
	return 0;
}