// 1부터 50 사이의 값 중 하나의 정수를 입력받고 입력 받은 수의 제곱을 출력하는 프로그램을 작성하시오.

#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main(void)
{
    int num1;

    printf("정수를 입력하세요: ");

    scanf("%d", &num1);    // 표준 입력을 받아서 변수에 저장
    
    if (1 < num1 < 50)
        printf("제곱은 : %d\n", num1 * num1);    // 변수의 내용을 출력

    else
        printf("1~50 사이의 숫자만 입력하세요 ");

    // for (int i = 1; i < 50; i++) {}

    return 0;
       
}