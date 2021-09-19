#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 정수 2개 입력 후 연산자 입력 받아서 연산 결과를 출력하는 프로그램
// 피 연산자 입력 :
// 연산자 입력 : 
int main(void)
{
	int num1;
	int num2;
	char c;

	printf("첫번째 피 연산자 입력 : ");
	scanf("%d", &num1); // 스페이스나 엔터키를 만날 때까지

	printf("두번째 피 연산자 입력 : ");
	scanf("%d", &num2);

	fflush(stdin); // stdin 입력 버퍼 의미
	printf("연산할 연산자 입력 : ");
	scanf("%c", &c);


	if (c == '+') {
		printf("두 값을 '+' 한 연산 결과는 : %d", num1 + num2);
	}
	else if (c == '-') {
		printf("두 값을 '-' 한 연산 결과는 : %d", num1 - num2);
	}
	else if (c == '*') {
		printf("두 값을 '*' 한 연산 결과는 : %d", num1 * num2);
	}
	else if (c == '/') {
		printf("두 값을 '/' 한 연산 결과는 : %d", num1 / num2);
	}
	else {
		printf("+, -, *, / 연산자 중에서 입력해주세요");
	}

	return 0;
}