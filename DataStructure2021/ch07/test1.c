// 1���� 50 ������ �� �� �ϳ��� ������ �Է¹ް� �Է� ���� ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int main(void)
{
    int num1;

    printf("������ �Է��ϼ���: ");

    scanf("%d", &num1);    // ǥ�� �Է��� �޾Ƽ� ������ ����
    
    if (1 < num1 < 50)
        printf("������ : %d\n", num1 * num1);    // ������ ������ ���

    else
        printf("1~50 ������ ���ڸ� �Է��ϼ��� ");

    // for (int i = 1; i < 50; i++) {}

    return 0;
       
}