#include <stdio.h>
#define R 3
int b[R];
void printReCom(void) {
	for (int i = 0; i < R; i++) printf("%5d", b[i]);
	printf("\n");
}
void exchange(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void ReCombination(int a[], int n, int r, int ii) {
	int i;
	if (r == R) printReCom();
	else for (i = ii + 1; i < n; i++) {
		exchange(a + r, a + i);
		b[r] = a[i];
		ReCombination(a, n, r + 1, i);
	}
}
int main(void) {
	int a[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(a) / sizeof(int);
	ReCombination(a, n, 0, 0);
	return 0;
}