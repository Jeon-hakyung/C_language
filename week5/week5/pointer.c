// �������� ���� ����
#include <stdio.h>
int main(void)
{
	int i = 10; int k=0; 
	int* pi = &i; 

	printf("k= %d i = %d, pi = %p\n",k, i, pi);
	k= (*pi)++; // k= *pi�� ���� �״�����  (*pi)=(*pi)+1 ; A ����������. k�� �ִ°ɸ��� 
	printf("k= %d i = %d, pi = %p\n",k, i, pi);
	k= *pi++; // pi=pi+1; //�ּҰ��� ������Ű�°� B
	printf("k= %d i = %d, pi = %p\n",k, i, pi);

	k= *++pi;  // pi=pi+1�� ���� ����ȴ�.. �굵 �ּҰ��� ������Ű�°� B  
	// k�� �� �����Ⱚ�� ����? 
	// pi�� ���� ���� ������Ű�� k���ٰ� ����ִµ�.. 
	printf("k= %d i = %d, pi = %p\n",k, i, pi);

	*pi = 999; 
	k= ++*pi; // *pi=*pi+1�� ���� �״����� k=*pi; ����Ű�� ���� ������Ű�� �ּҰ��� �״�� ���� A 
	printf("k= %d i = %d, pi = %p %d\n",k, i, pi, *pi); 
	return 0;
}