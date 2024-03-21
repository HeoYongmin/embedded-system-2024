/* ���� Ž�� */
#include <stdio.h>

int binarysearch(int ary[], int size, int target) {
	int first = 0;
	int last = size -1;
	int middle = 0;

	while (first <= last) {
		middle = (first + last) / 2;
		if (target == ary[middle]) printf("%d\n", ary[middle]);
		else {
			if (target > ary[middle]) first = middle + 1;
			else last = middle - 1;
		}
	}
	return -1;
}

int main()
{
	int ary[] = { 1, 2, 3, 4, 5, 8, 9 };
	int size = sizeof(ary) / sizeof(ary[0]);
	int ridx;
	ridx = binarysearch(ary, size, 9);

	if (ridx == -1) printf("ã�� ���Ұ� �����ϴ�\n");
	else {
		printf("ã�� �ε���: %d\n", ridx);
	}
	
}