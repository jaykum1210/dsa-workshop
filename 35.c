#include <stdio.h>

int push(int arr[],int size,int val, int top){
    if (top==size-1)
    {
        printf("Overflow\n");
        return top;
    }
    else{
        top++;
        arr[top] = val;
        return top;
    }
}

int pop(int arr[],int top){
    if(top == -1){
        printf("Underflow\n");
        return top;
    }
    else{
        int value = arr[top];
        printf("Popped element = %d\n",arr[top]);
        top--;
        return top;
    }
}

int main(){
    int a,top=-1;
    printf("Enter number of elements = ");
    scanf("%d",&a);
    int b[a];
    int choice=0;
    while (choice<4)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3.Top Element\n");
        printf("4. Exit\n");
        printf("Enter choice = ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:{
            int val;
            printf("Enter value = ");
            scanf("%d", &val);
            top = push(b, a, val, top);
            break;}
        case 2:
            top = pop(b,top);
            break;
        case 3:
            printf("Top value = %d\n",b[top]);
            break;
        case 4:
            break;
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}