#include <stdio.h>
#define N 5

void enqueue(int);
void dequeue();
void displayqueue();
int Q[N], rear = -1, front = -1;
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    displayqueue();
    dequeue();
    displayqueue();
}
void enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        Q[rear] = x;
    }
    else if (front == (rear + 1) % N)
    {
        printf("the queue is full");
    }
    else
    {
        rear = (rear + 1) % N;
        Q[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("the queue is empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % N;
    }
}
void displayqueue()
{
    if (front == -1 && rear == -1)
    {
        printf("the queue is empty");
    }
    else
    {
        int i = front;
        while (i != rear)
        {
            printf("%d", Q[i]);
            i = (i + 1) % N;
        }
        printf("%d", Q[i]);
    }
}