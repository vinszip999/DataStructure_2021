#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���� 2�� �Է� �� ������ �Է� �޾Ƽ� ���� ����� ����ϴ� ���α׷�
// �� ������ �Է� :
// ������ �Է� : 
int main(void)
{
	int num1;
	int num2;
	char c;

	printf("ù��° �� ������ �Է� : ");
	scanf("%d", &num1); // �����̽��� ����Ű�� ���� ������

	printf("�ι�° �� ������ �Է� : ");
	scanf("%d", &num2);

	fflush(stdin); // stdin �Է� ���� �ǹ�
	printf("������ ������ �Է� : ");
	scanf("%c", &c);


	if (c == '+') {
		printf("�� ���� '+' �� ���� ����� : %d", num1 + num2);
	}
	else if (c == '-') {
		printf("�� ���� '-' �� ���� ����� : %d", num1 - num2);
	}
	else if (c == '*') {
		printf("�� ���� '*' �� ���� ����� : %d", num1 * num2);
	}
	else if (c == '/') {
		printf("�� ���� '/' �� ���� ����� : %d", num1 / num2);
	}
	else {
		printf("+, -, *, / ������ �߿��� �Է����ּ���");
	}

	return 0;
}