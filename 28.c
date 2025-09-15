#include <stdio.h>

int greatest(int arr[],int a,int i){
    int c = arr[0];
    if (i==a-1)
    {
        return c;
    }
    else{
        if (c<arr[i])
        {
            c = arr[i];
        }
        greatest(arr[a-i],a,i+1);
    }
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d element = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int i = 0;
    greatest(b,a,i);

}