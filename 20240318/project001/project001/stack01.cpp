#include <stdio.h>
#include <stdlib.h>

#define STACK_SZ  10

typedef struct STACK {
	int buf[STACK_SZ];	// ������ ��Ҹ� �����ϴ� �迭
	int top;			// ������ �� �� ����� �ε����� ����Ű�� ����
	
}stack;

void push(stack * pstk, int value);  //�Լ�����
int pop(stack * pstk);

 int main() {
	stack s;
	//push(s, 10);  ȣ��
	// ���� �ʱ�ȭ: top�� -1�� �����Ͽ� ������ ��������� ǥ��
	s.top = -1;
	
	push(&s, 10);
	push(&s, 20);
	push(&s, 30);
	
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	return 0;
}
 void push(stack * pstk, int value) //�Լ�����
 {
	if (pstk->top == STACK_SZ - 1) {
		printf("overflow\n");
	 }
	else {
		//pstk->top++;
		pstk->buf[++(pstk->top)] = value;
		printf("%d\n", pstk->buf[pstk->top]); 
	 }
 }
int pop(stack * pstk)
{
	if (pstk->top <= -1) {
		printf("������ ������ϴ�\n");
		return -1; 
	 }
	else {
		int value;
		value = pstk->buf[pstk->top];
		pstk->top--;
		return value; 
	 }
}
