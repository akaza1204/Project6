#include <stdio.h>
#include <stdbool.h>
#define MAX_STACK 100
#define MAX_QUEUE 100
typedef struct {
	int data[MAX_STACK];
	int top;
}Stack;

typedef struct {
	int data[MAX_QUEUE];
	int front;
	int rear;
}Queue;

void init_stack(Stack* s);
bool is_empty(Stack* s);
bool is_full(Stack* s);
void push(Stack* s, int value);
int pop(Stack* s);
int peek(Stack* s);
void print_stack(Stack* s);
void init_queue(Queue* q);
bool is_queue_empty(Queue* q);
bool is_queue_full(Queue* q);
int peek_queue(Queue* q);
int dequeue(Queue* q);
void enqueue(Queue* q, int element);
void print_queue(Queue* q);


int main() {
	Stack s;
	Queue q;
	init_stack(&s);
	init_queue(&q);
	int num;ㄴㅇㄴ
	int koko;xxxxxxxxxxxxxxxxxxxxxxxx
	int queue_element;
	while (1)
	{
		printf("1.Add to Stack\n");
		printf("2.Pop from Stack\n");
		printf("3.Print Stack\n");
		printf("4.Clear Stack\n");
		printf("5.Add to Queue\n");
		printf("6.Pop from Queue\n");
		printf("7.Print Queue\n");
		printf("8.Clear Queue\n");
		printf("9.Exit\n");
		printf("Enter your choice: ");
		scanf_s("%d", &num);

		switch (num)
		{
		case 1:
			printf("add number?: ");
			scanf_s("%d", &koko);
			push(&s, koko);
			break;

		case 2:
			if(is_empty(&s)==1) {
				printf("stack is empty\n");
				break;
			}
			else printf("pop value: %d\n", pop(&s));
			break;
		case 3:
			print_stack(&s);
			break;
		case 4:
			printf("clear stack\n");
			init_stack(&s);
			break;
		case 5:
			printf("add number?: ");
			scanf_s("%d", &queue_element);
			enqueue(&q, queue_element);
			break;

		case 6:
			if (is_queue_empty(&q)==1)
			{
				printf("queue is empty\n");
				break;
			}
			printf("dequeue value: %d\n", dequeue(&q));
			break;
		case 7:
			print_queue(&q);
			break;
		case 8:
			printf("clear queue\n");
			init_queue(&q);
			break;
		default: printf("exit\n");
			break;
		}
	}return 0;
}



void init_stack(Stack * s) {
	s->top = -1;
}
bool is_empty(Stack* s) {
	return s->top == -1;
}
bool is_full(Stack* s) {
	return s->top == MAX_STACK - 1;
}

void push(Stack* s, int value) {
	if (is_full(s) == 1) {
		printf("stack is full\n");
			}
	else {
		s->data[++(s->top)] = value;
	}
}

int pop(Stack* s) {
		return s->data[(s->top)--];
}

int peek(Stack* s) {
	if (is_empty(s) == 1) {
		printf("stack is empty\n");
		return -1;
	}
	else {
		return s->data[(s->top)];
	}
}

void print_stack(Stack* s) {
	for (int i = s->top; i >= 0; i--) {
		printf("%d\n", s->data[i]);
	}
}

void init_queue(Queue* q) {
	q->rear = 0;
	q->front = 0;
}

bool is_queue_empty(Queue* q) {
	return (q->front) >= (q->rear);
}

bool is_queue_full(Queue* q) {
	return q->rear == MAX_QUEUE - 1;
}

int peek_queue(Queue* q) {
	if (is_queue_empty(q) == 1) {return -1;}
	else {return q->data[q->front];}
}
int dequeue(Queue* q) {

	return q->data[(q->front)++];
}
void enqueue(Queue* q, int element) {
	if (is_queue_full(q) == 1) {
		printf("queue is full");
	}
	else {
		q->data[(q->rear)++] = element;
	}
}
void print_queue(Queue* q) {
	for (int i = q->front; i < q->rear; i++) {
		printf("%d\n", q->data[i]);
	}
}
