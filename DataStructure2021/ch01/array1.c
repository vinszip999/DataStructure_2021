#include <stdio.h>

int main(void) {
	int a[3][5] = { {1, 3, 5, 7, 9}, 
					{11, 13, 15, 17, 19},
					{21, 23, 25, 27, 29} };
	int i, j, b[3][5];
	char h[5], n[11];

	printf("학번: "); gets_s(h, 5);
	printf("이름: "); gets_s(n, 10);

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) { 
			b[i][4-j] = a[i][j]; // b[i][j] = a[i][j];
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("%5d", b[i][j]);
		}
		printf("\n");
	}

	printf("\n학번: % s\n이름: % s\n", h, n);

	return 0;
}

