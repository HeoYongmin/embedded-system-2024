#include <stdio.h>

void bubSort(int *ary, int n)
{
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i; j < sizeof - 1; j++) {
			if (ary[j] > ary[j + 1]) {
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}
void main()
{
	int ary[] = { 9, 4, 8, 15, 3, 7, 2, 1 };
	int size = sizeof(ary) / sizeof(ary[0]);
	bubSort(ary, size);
	// 오름차순으로 정렬
	

}