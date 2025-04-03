#include <stdio.h>
#define SIZE 5
void get_grade(int s[]);
void print_grade(int s[]);
void change_grade(int s[]);
void get_double(int s[]);
void copy_grade(int s[], int s2[]);
int main(void)
{
	int grade[SIZE] = { 10, 20, 30, 40, 50 };
	int grade2[SIZE];
	// 만약에 배열에 랜덤한 값을 주고싶으면
	for (int i = 0; i < SIZE; i++) {
		grade[i] = rand() % 100; 
	}
	print_grade(grade);
	//get_grade(grade);
	//change_grade(grade);
	//get_double(grade);
	copy_grade(grade, grade2);
	print_grade(grade);
	return 0;
}
// 사용자로부터 성적을 입력받아서 배열에 저장한다. 
void get_grade(int grade[]) {
	// ①
	printf("\n 입력=>\n");
	for (int i = 0; i < SIZE; i++) {
		scanf_s("%d", &grade[i]);
	}
}
// 배열 원소들을 화면에 출력한다. 
void print_grade(int grade[])
{
	// ②
	printf("\n 출력=>\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", grade[i]);
	}
}

void change_grade(int grade[]) {
	// ①
	for (int i = 0; i < SIZE; i++) {
		if (grade[i] < 30) {
			grade[i] = 30;
		}
	}
}

void get_double(int grade[]) { //2배시키는 함수 

	for (int i = 0; i < SIZE; i++) {
		grade[i] = 2 * grade[i];
	}

}


void copy_grade(int grade[], int grade2[]) {

	for (int i = 0; i < SIZE; i++) {
		grade2[i] = grade[i];
	}
}