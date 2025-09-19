#include <stdio.h>

void enqueue(int arr[],int size, int val, int front, int rear){
    if (rear=size)
    {
        printf("Overflow\n");
        return;
    }
    else{
        rear++;
        arr[rear] = val;
        return;
    }
}

void 

int main(){
    int a,rear=-1,front=0;
    printf("Enter number of elements = ");
    scanf("%d",&a);
    int b[a];
    int choice=0;
    while (choice<3)
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display array\n");
        printf("Enter choice = ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:{
            int val;
            printf("Enter value = ");
            scanf("%d", &val);
            rear = push(b, a, val, front, rear);
            break;}
        case 2:
            for (int i = 0; i < rear; i++)
            {
                printf("%d ",b[i]);
            }
            
    }
    return 0;
}