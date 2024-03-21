#include <stdio.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void bubblesort(int ary[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ary[i] > ary[j]) {
				swap(&ary[i], &ary[j]);
			}
		}
	}
}
int main()
{
	int ary[] = { 9, 4, 8, 15, 3, 7, 2, 1 };
	int count = 0;

	printf("기존 배열 :");
	for (int i = 0; i < 8; i++) {
		printf("%d ", ary[i]);
	}
	printf("\n");

	bubblesort(ary, 8);

	printf("오름차순 배열 : ");
	for (int i = 0; i < 8; i++) {
		printf("%d ", ary[i]);
	}
	printf("\n");
}
