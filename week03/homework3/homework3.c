#include <stdio.h>
#define SIZE 5
double cal_average(int grade[],int k); // ич
int get_min_index(int grade[], int k);
int main(void)
{
	int grade[] = { 10, 20, 30 ,40, 50 };
	int average; 
	average = get_min_index(grade,SIZE);
	printf("index = %d\n", average);
	return 0;
}
double cal_average(int grade[], int k) // иш
{
	int sum = 0;
	// *
	for (int i = 0; i < k; i++) {
		sum = sum + grade[i];
	}

	return sum / k; 
}

int get_min_index(int grade[], int k) {

	int index = 0; 
	for (int i = 0; i < SIZE; i++) {
		if (grade[index] < grade[i]) {
			index = i;
		}
	}
	return index; 
}