#include <stdio.h>
#define SIZE 5
void f(int s[]);

int main(void) {
	int grade[SIZE] = { 10, 20,30,40,50 }; int k = 70; 
	for (int i = 0; i < SIZE; i++) {
		// grade[i] = rand() % 100;
		printf("%d ", grade[i]);
	}
	f(grade);
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", grade[i]);
	}
}

void f(int s[]) {

	s[0] = 999; 

}

// 배열은 포인터를 주기때문에 값이 바뀜 