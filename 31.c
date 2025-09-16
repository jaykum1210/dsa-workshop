#include <stdio.h>

int bin(int arr[],int size, int tar){
    int found = 0;
    int left = 0;
    int right = size-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if (arr[mid] == tar)
        {
            found = 1;
            break;
        }
        else if (arr[mid]>tar)
        {
            right = mid-1;
        }
        else{
            left = mid +1;
        }
    }
    return found;
}

int main(){
    int a,tar;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter number you want to search = ");
    scanf("%d",&tar);
    int c = bin(b,a,tar);
    if (c==1)
    {
        printf("%d is present\n",tar);
    }
    else{
        printf("%d is not present\n",tar);
    }
    return 0;
}