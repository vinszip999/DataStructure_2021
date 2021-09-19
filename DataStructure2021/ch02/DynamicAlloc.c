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
// 더 많은 걸 만들어달라고 했을 때 처리를 해준다.
// 동적영역 -  더 큰 크기를 만들어달라고 했을 때 처리해줌. 바람직한 것은 아님.
// 힙 예약크기도 바꿔주는 것이 원칙
