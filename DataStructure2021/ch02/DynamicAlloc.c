#include <stdio.h>
#define SIZE 1000000
int main(void) {
	//int a[SIZE] = {10, };
	//printf("%d\n", a[0]);

	int n = 1000000;
	int* a;
	a = (int *)malloc(sizeof(int) * n); // 4
	a[0] = 10;
	printf("%d", a[0]);
	free(a);

	return 0;

}
// �� ���� �� �����޶�� ���� �� ó���� ���ش�.
// �������� -  �� ū ũ�⸦ �����޶�� ���� �� ó������. �ٶ����� ���� �ƴ�.
// �� ����ũ�⵵ �ٲ��ִ� ���� ��Ģ
