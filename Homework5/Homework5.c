#include <stdio.h>
struct movie {
	char title[30]; // 영화
	char director[20]; // 감독
	float score; // 평점
};
struct movie fill(struct movie m)
{
	// 여기 작성
	struct movie m;	char title;	printf("좋아하는 영화의 제목은 무엇입니까?\n");	scanf_s("%s", title);	strcpy(a.title, title);	printf("\n그 영화의 감독은 누구입니까?\n");	scanf_s("%s", a.director);	printf("\n별점은 얼마를 주실건가요?\n");	scanf_s("%f", a.score);	printf("영화의 제목:%d", a.title);
}int main(void) {	struct movie a;	char title;	printf("좋아하는 영화의 제목은 무엇입니까?\n");	scanf_s("%s", title);	strcpy(a.title, title);	printf("\n그 영화의 감독은 누구입니까?\n");	scanf_s("%s", a.director);	printf("\n별점은 얼마를 주실건가요?\n");	scanf_s("%f", a.score);	printf("영화의 제목:%d", a.title);		return 0;}