#include <stdio.h>

enum days { SUN=2, MON, TUE, WED, THU, FRI, SAT };

char* days_name[] = {
"sunday", "monday", "tuesday", "wednesday", "thursday", "friday",
"saturday" };

int main(void)
{
	enum days d; // �������� ������ �������� 
	d = WED;
	if (d == 3) printf("%d��° ����\n", d); //d==WED
	else printf("������ �ƴ�\n", d);
	//printf("%d��° ������ %s�Դϴ�\n", d, days_name[d]);
	return 0;
}