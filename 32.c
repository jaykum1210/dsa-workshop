#include <stdio.h>

int bin(int arr[],int size){
    int left = 0;
    int right = size-1;
    while (left<=right)
    {
        int mid = left + (right-left)/2;
        if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            return arr[mid];
        }
        else if (arr[mid]>arr[mid-1])
        {
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d element= ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int c = bin(b,a);
    printf("Highest element = %d\n",c);
    return 0;
}