#include <stdio.h>

#define Q_SIZE 10
/* 전역 선언 */
int queue[Q_SIZE];
int front = -1;
int rear = -1;

void enqueue(int _data)
{
	if(rear >= Q_SIZE - 1) {
		printf("QUEUE OF!!\n");
		return;
	}
	queue[++rear] = _data;		//_rear = 0;
}

int dequeue()
{
	if(front == rear) {
		printf("OUEUE UnderF!!\n");
		return -1;
	}
	return queue[++front];
}
void main()
{
//	int rear = -1;
//	int front = -1;
//	int queue[Q_SIZE];

	enqueue(10);
	enqueue(20);
	enqueue(30);

	printf("%d\n", dequeue());		//10
	printf("%d\n", dequeue());		//20


}