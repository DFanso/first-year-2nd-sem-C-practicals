#include <stdio.h>

int stack[10];
int size = 10;
int top =-1;


/* data inserting function */
void push(int data){
    if (isfull ()==0){

        top = top +1;
        stack[top] = data;
    }
    else
{
    printf("stack is full | cant insert \n");
}

    }



/* data deleting function */
int pop(){

    if(isempty()==0){
        int temp;
        temp = stack[top];
        top = top -1;
        return temp;

    }
    else
{
    printf("stack is empty | cant delete\n");
}

}

/* if stack full */
int isfull(){
    if(top == size -1)
        return 1;
    else
        return 0;
}

/* if stack empty */
int isempty(){
    if(top == -1)
        return 1;
    else
        return 0;
}

/* print function */

void printData(){
    int i;
    for (i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}



int main (){

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);
    push(110);
    printData();
    printf("deleted items: %d \n",pop());
    printData();
    printf("deleted items: %d \n",pop());
    printData();
    printf("deleted items: %d \n",pop());
    printData();
    printf("deleted items: %d \n",pop());
    printData();
    printf("deleted items: %d \n",pop());
    printData();
    printf("deleted items: %d \n",pop());
    printData();
    printf("deleted items: %d \n",pop());
    printData();
    printf("deleted items: %d \n",pop());
    printData();
    printf("deleted items: %d \n",pop());
    printData();
    printf("deleted items: %d \n",pop());
    printData();
    printf("deleted items: %d \n",pop());
    printData();

}
