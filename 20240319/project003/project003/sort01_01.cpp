#include <stdio.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void main()
{
	// int ary[] = { 9, 4, 8, 15, 3, 7, 2, 1};
	int num1, num2;

	printf("�ΰ��� ������ �Է��ϼ���: \n");
	scanf("%d, %d", &num1, &num2);

	if (num1 > num2) {
		swap(&num1, &num2);
	}

	printf("������������ ���ĵ� ���: %d %d\n", num1, num2);


}