
#include <stdio.h>

int queue[5];
int rear = -1;x
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
    int choice,userinput;
    do
    {
        printf("Enter 1 for enqueue, 2 for dequeue, 3 for display \n");
        scanf ("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter Value: ");
                    scanf("%d",&userinput);
                    enqueue(userinput);
                    break;

            case 2: dequeue();
                    break;

            case 3: PrintData();
                    break;

            default: printf("Hari eka dpn \n");
        }

    }
    while(1);


}


