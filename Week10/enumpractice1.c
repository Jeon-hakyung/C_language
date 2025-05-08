#include <stdio.h>

enum days { SUN=2, MON, TUE, WED, THU, FRI, SAT };

char* days_name[] = {
"sunday", "monday", "tuesday", "wednesday", "thursday", "friday",
"saturday" };

int main(void)
{
	enum days d; // 열거형의 본질은 정수구나 
	d = WED;
	if (d == 3) printf("%d번째 요일\n", d); //d==WED
	else printf("수요일 아님\n", d);
	//printf("%d번째 요일은 %s입니다\n", d, days_name[d]);
	return 0;
}