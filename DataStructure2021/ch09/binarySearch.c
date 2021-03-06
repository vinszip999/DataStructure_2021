#include<stdio.h>

int cnt = 0;

int binarySearch(int a[], int n, int key) {
	int left = 0, right = n - 1, mid;

	while (left <= right) {
		cnt++;
		mid = (left + right) / 2;
		if (key == a[mid]) return mid;
		if (key < a[mid]) right = mid - 1;
		else left = mid + 1;
	}

	return -1;
}

int main(void) {
	int a[] = { 3, 7, 10, 12, 14, 18, 21, 33, 35, 48, 50, 55, 64, 72 };
	int key, index, n;

	n = sizeof(a) / sizeof(int);

	printf("\n찾을 값 : ");
	scanf_s("%d", &key);

	index = binarySearch(a, n, key);
	printf("\n이분 검색 결과: ");
	if (index < 0) printf("\n찾고자 하는 값이 없음!\n");
	else printf("\n%d을(를) %d위치에서 %d회 비교하여 찾음!\n", key, index, cnt);

	return 0;
}