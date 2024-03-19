/* 순차자료구조를 이용한 큐 자료구조 */
#include <stdio.h>
#include <stdlib.h>

#define QSIZE 10

typedef struct {
	int front;
	int rear;
	char queue[QSIZE];
}queue;
queue* create();
void enqueue(queue* q, char data);
char dequeue(queue* q);
void printQueue(queue* q);
void main()
{
	queue* qa = create();
	enqueue(qa, 'A');
	enqueue(qa, 'B');
	enqueue(qa, 'C');
	//dequeue(qa);

	printf("%c\n", dequeue(qa));
	printf("%c\n", dequeue(qa));
	//printf("%c\n", dequeue(qa));

	printQueue(qa);
}

queue* create()
{
	queue* q = (queue*)malloc(sizeof(queue));
	if (q == NULL) exit(1);
	q->front = -1;
	q->rear = -1;
	return q;
}
void enqueue(queue* q, char data)
{
	if(q->rear == QSIZE - 1) {
		printf("isFull. \n");
	}
	else {
		q->queue[++(q->rear)] = data;
		printf("%c 값이 %d 번 큐에 입력되었습니다\n", q->queue[q->rear], q->rear);
	}
	
}
char dequeue(queue* q)
{
	if (q->front == q->rear) {
		printf("UnderF\n");
		return -1;
	}
	else {
		char ch;
		ch = q->queue[++(q->front)];
		return ch;
	}
}
void printQueue(queue* pq)
{
	printf("Queue: ");
	for (int i = pq->front + 1; i <= pq->rear; i++) {
		printf("%c", pq->queue[i]);
	}
	printf("\n");
}
