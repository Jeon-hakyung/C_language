#include <stdio.h>

int main(void) {

	int ch; // �������� ����

	while ((ch = _getch()) != EOF) {
		_putch('*'); 
		//�̷��� �ϸ� *�� ���� 
	}

	return 0;
}