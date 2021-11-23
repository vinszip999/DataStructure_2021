#include <stdio.h>
#include <limits.h>

#define SIZE 8
#define M INT_MAX

int minVertex(int D[], int chk[]) {
	int i, minValue = M, minIndex;

	for (i = 0; i < SIZE; i++)
		if (chk[i] == 0 && minValue > D[i]) {
			minValue = D[i];
			minIndex = i;
		}

	return minIndex;
}

void Dijkstra(int G[][SIZE], int D[], int P[], int i) {
	int chk[SIZE] = { 0, };
	int j, cnt = 0;

	for (j = 0; j < SIZE; j++)
		if (G[i][j] > 0 && G[i][j] < M) {
			D[j] = G[i][j];
			P[j] = i;
		}
	chk[i] = 1;
	cnt++;

	while (cnt < SIZE) {
		i = minVertex(D, chk);
		for (j = 0; j < SIZE; j++)
			if (G[i][j] > 0 && G[i][j] < M) //������ �ְ�
				if (D[j] > D[i] + G[i][j]) { //axis�� ��ġ�� ��ΰ� ª�ٸ�
					D[j] = D[i] + G[i][j]; //ª�� �Ÿ��� ������Ʈ
					P[j] = i; //axis�� ��ġ���� ��� ����
				}
		chk[i] = 1; //���� �� �࿡�� ����
		cnt++;
	}
}

int main(void) {
	int G[SIZE][SIZE] = { {0, 12, 15, 18, M,M, M, M},
			 {12, 0, M, M, 33, 26, M, M},
			 {15, M, 0, 7, M, 10, M, M},
			 {18, M, 7, 0, M, M, 11, M},
			 {M, 33, M, M, 0, 17, M, 15},
			 {M, 26, 10, M, 17, 0, M, 28},
			 {M, M, M, 11, M, M, 0, 20},
			 {M, M, M, M, 15, 28, 20, 0} };

	char V[SIZE] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };
	char depVertex, arrVertex;
	int P[SIZE] = { 0, };
	int D[SIZE] = { M, M, M, M, M, M, M, M };
	int i, j;

	printf("\n\t[���� �������� �Ÿ�]\n ");
	for (i = 0; i < SIZE; i++)printf("%4c", V[i]);
	printf("\n");
	for (i = 0; i < SIZE; i++) {
		printf("%c", V[i]);
		for (j = 0; j < SIZE; j++)
			if (G[i][j] == M)printf("%4c", '-');
			else printf("%4d", G[i][j]);
		printf("\n");
	}

	printf("\n��� ����(A~H) : ");
	scanf_s("%c", &depVertex, 1);
	getchar();
	printf("���� ����(A~H) : ");
	scanf_s("%c", &arrVertex, 1);
	getchar();
	while (depVertex == arrVertex) {
		printf("��߰� ������ �����ϴ�. ���� ����(A~H) : ");
		scanf_s("%c", &arrVertex, 1);
		getchar();
	}

	for (i = 0; i < SIZE; i++) if (arrVertex == V[i]) break;
	D[i] = 0;
	P[i] = i;

	Dijkstra(G, D, P, i);

	for (i = 0; i < SIZE; i++) if (depVertex == V[i]) break;
	printf("\n%c���� %c���� �ִ� �Ÿ� �� ���: %d, %c", depVertex, arrVertex, D[i], depVertex);

	while (V[i] != arrVertex) {
		i = P[i];
		printf(" -> %c", V[i]);
	}
	printf("\n");

	return 0;
}