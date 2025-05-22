#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student
{
	char name[20];
	int score;
};
int main()
{
	struct Student s1 = { "홍길동", 90 };
	FILE* fp = fopen("struct.dat", "wb");
	fwrite(&s1, sizeof(struct Student), 1, fp);
	// 첫번째 매개변수는구조체의주소값 

	fclose(fp);

	struct Student s2;
	fp = fopen("struct.dat", "rb");
	fread(&s2, sizeof(struct Student), 1, fp);
	fclose(fp);
	printf("이름: %s, 점수: %d\n", s2.name, s2.score);
	return 0;
}