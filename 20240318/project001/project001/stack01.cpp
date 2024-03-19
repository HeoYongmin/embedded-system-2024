#include <stdio.h>
#include <stdlib.h>

#define STACK_SZ  10

typedef struct STACK {
	int buf[STACK_SZ];	// 스택의 요소를 저장하는 배열
	int top;			// 스택의 맨 위 요소의 인덱스를 가리키는 변수
	
}stack;

void push(stack * pstk, int value);  //함수선언
int pop(stack * pstk);

 int main() {
	stack s;
	//push(s, 10);  호출
	// 스택 초기화: top을 -1로 설정하여 스택이 비어있음을 표시
	s.top = -1;
	
	push(&s, 10);
	push(&s, 20);
	push(&s, 30);
	
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	return 0;
}
 void push(stack * pstk, int value) //함수선언
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
		printf("스택이 비었습니다\n");
		return -1; 
	 }
	else {
		int value;
		value = pstk->buf[pstk->top];
		pstk->top--;
		return value; 
	 }
}
