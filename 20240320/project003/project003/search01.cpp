/* 순차 탐색 */
#include <stdio.h>

int lSearch(int ary[], int size, int tg) {
	for (int i = 0; i < size; i++) {
		if (ary[i] == tg) {
			return i;
		}
	}
	return -1;
}

void main()
{
	int ary[] = {3, 5, 2, 4, 9, 8, 1};
	int size = sizeof(ary) / sizeof(ary[0]);
	int ridx;
	ridx = lSearch(ary, size, 9);

	if (ridx == -1) printf("찾는 원소가 없습니다\n");
	else {
		printf("찾은 인덱스 :%d\n", ridx);
	}
}