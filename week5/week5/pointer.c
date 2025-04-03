// 포인터의 증감 연산
#include <stdio.h>
int main(void)
{
	int i = 10; int k=0; 
	int* pi = &i; 

	printf("k= %d i = %d, pi = %p\n",k, i, pi);
	k= (*pi)++; // k= *pi를 먼저 그다음에  (*pi)=(*pi)+1 ; A 전위연산자. k에 넣는걸먼저 
	printf("k= %d i = %d, pi = %p\n",k, i, pi);
	k= *pi++; // pi=pi+1; //주소값을 증가시키는것 B
	printf("k= %d i = %d, pi = %p\n",k, i, pi);

	k= *++pi;  // pi=pi+1이 먼저 실행된다.. 얘도 주소값을 증가시키는것 B  
	// k에 왜 쓰레기값이 들어가는? 
	// pi의 값을 먼저 증가시키고 k에다가 집어넣는데.. 
	printf("k= %d i = %d, pi = %p\n",k, i, pi);

	*pi = 999; 
	k= ++*pi; // *pi=*pi+1를 먼저 그다음에 k=*pi; 가리키는 값을 증가시키고 주소값은 그대로 냅둠 A 
	printf("k= %d i = %d, pi = %p %d\n",k, i, pi, *pi); 
	return 0;
}