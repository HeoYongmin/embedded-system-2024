/* �����ڷᱸ���� �̿��� ť */
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	int data;
	struct NODE* link;
}node;
typedef struct {
	node* rear;
	node* front;
}linkQ;

linkQ* createLinkQ();
void enQueue(linkQ* alq, int data);
void printQ(linkQ* alq);
int deQueue(linkQ* alq);
void main()
{
	linkQ* q = createLinkQ();
	enQueue(q, 10);
	enQueue(q, 20);
	enQueue(q, 30);

	printQ(q);
	//deQueue(q);
	printf("���ŵǴ� Queue�� : %d\n", deQueue(q));
	printf("���ŵǴ� Queue�� : %d\n", deQueue(q));
}

linkQ* createLinkQ()
{
	linkQ* lq= (linkQ*)malloc(sizeof(linkQ));
	if (lq == NULL) exit(1);
	lq->front = NULL;
	lq->rear = NULL;
	return lq;
}
void enQueue(linkQ* alq, int data)
{
	node* newnode = (node*)malloc(sizeof(node));
	if (newnode == NULL) {
		printf("isFull\n");
		exit(1);
	}
	newnode -> data = data;
	newnode->link = NULL;

	if (alq->rear == NULL) {
		alq->front = newnode;
		alq->rear = newnode;
	}
	else {
		alq->rear->link = newnode;
		alq->rear = newnode;
	}
	printf("%d ���� ť�� �ԷµǾ����ϴ�\n", data);
}
void printQ(linkQ* alq)
{
	printf("��µǴ� Queue ��: ");
	node* curr = alq->front;
	while (curr != NULL) {
		printf("%d ", curr->data);
		curr = curr->link;
	}
	printf("\n");
}
int deQueue(linkQ* alq)
{
	if(alq->front == NULL) {
		printf("ť�� ������ϴ�.\n");
		return -1;
	}
	int data = alq->front->data;
	node* temp = alq->front;
	alq->front = alq->front->link;
	free(temp);

	if (alq->front == NULL) {
		alq->rear = NULL;
	}
	return data;
}