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
	// ���࿡ �迭�� ������ ���� �ְ������
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
// ����ڷκ��� ������ �Է¹޾Ƽ� �迭�� �����Ѵ�. 
void get_grade(int grade[]) {
	// ��
	printf("\n �Է�=>\n");
	for (int i = 0; i < SIZE; i++) {
		scanf_s("%d", &grade[i]);
	}
}
// �迭 ���ҵ��� ȭ�鿡 ����Ѵ�. 
void print_grade(int grade[])
{
	// ��
	printf("\n ���=>\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", grade[i]);
	}
}

void change_grade(int grade[]) {
	// ��
	for (int i = 0; i < SIZE; i++) {
		if (grade[i] < 30) {
			grade[i] = 30;
		}
	}
}

void get_double(int grade[]) { //2���Ű�� �Լ� 

	for (int i = 0; i < SIZE; i++) {
		grade[i] = 2 * grade[i];
	}

}


void copy_grade(int grade[], int grade2[]) {

	for (int i = 0; i < SIZE; i++) {
		grade2[i] = grade[i];
	}
}