#include <stdio.h>

int main(void) {

	int ch; // 정수형에 주의

	while ((ch = _getch()) != EOF) {
		_putch('*'); 
		//이렇게 하면 *만 찍힘 
	}

	return 0;
}