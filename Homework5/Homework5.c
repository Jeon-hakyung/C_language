#include <stdio.h>
struct movie {
	char title[30]; // ��ȭ
	char director[20]; // ����
	float score; // ����
};
struct movie fill(struct movie m)
{
	// ���� �ۼ�
	struct movie m;	char title;	printf("�����ϴ� ��ȭ�� ������ �����Դϱ�?\n");	scanf_s("%s", title);	strcpy(a.title, title);	printf("\n�� ��ȭ�� ������ �����Դϱ�?\n");	scanf_s("%s", a.director);	printf("\n������ �󸶸� �ֽǰǰ���?\n");	scanf_s("%f", a.score);	printf("��ȭ�� ����:%d", a.title);
}int main(void) {	struct movie a;	char title;	printf("�����ϴ� ��ȭ�� ������ �����Դϱ�?\n");	scanf_s("%s", title);	strcpy(a.title, title);	printf("\n�� ��ȭ�� ������ �����Դϱ�?\n");	scanf_s("%s", a.director);	printf("\n������ �󸶸� �ֽǰǰ���?\n");	scanf_s("%f", a.score);	printf("��ȭ�� ����:%d", a.title);		return 0;}