#include <stdio.h>

int queue[5];
int rear = -1;
int front = 0;
int size = 5;

void enqueue (int data)
{
    if (isfull()== 0)
    {
        rear = rear + 1;
        queue[rear] = data;
    }
    else
    {
        printf("queue is full cant enqueue \n");
    }

}

void dequeue ()
{
    if (isempty() == 0)
    {
        printf("Removed Element: %d \n",queue[front]);
        front = front + 1;
    }
    else
    {
        printf("Queue if empty cant dequeue\n");
    }
}

int isfull()
{
    if (rear == size - 1)
        return 1;
    else
        return 0;
}

int isempty()
{
    if(rear == -1 || front > rear)
        return 1;
    else
        return 0;


}

void PrintData()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d \n",queue[i]);
    }
}

int main ()
{
    int i;
    int userinput;

    for(i=front;i<5;i++)
    {
        printf("Enter 5 values: ");
        scanf("%d", &userinput);
        enqueue(userinput);

    }
    PrintData();


}


