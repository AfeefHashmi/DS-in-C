#include <stdio.h>
#include <stdlib.h>

void enqueue(int);
void deque();
void displayqueue();
struct node
{
    int data;
    struct node *next;
} *front = 0, *end = 0;

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    displayqueue();
}
void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next = 0;
    newnode->data = x;

    if (front == 0 && end == 0)
    {
        front = end = newnode;
    }
    else
    {
        end->next = newnode;
        end = newnode;
    }
}

void deque()
{
    if (front == 0 && end == 0)
    {
        printf("queue is empty");
    }
    else if (front == end)
    {
        front = end = 0;
    }
    else
    {
        front = front->next;
    }
}

void displayqueue()
{

    if (front == 0 && end == 0)
    {
        printf("queue is empty");
    }
    else
    {
        struct node *temp = 0;
        temp = front;
        while (temp != 0) {
            printf("%d", temp->data);
            temp = temp->next;
        }
    }
}