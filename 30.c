#include <stdio.h>

int ssearch(int arr[],int size,int tar){
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==tar)
        {
            found = 1;
        }
    }
    return found;
}

int main(){
    int a,tar;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d element = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter Number you want to search = ");
    scanf("%d",&tar);
    int c = ssearch(b,a,tar);
    if (c==1)
    {
        printf("%d is present\n",tar);
    }
    else{
        printf("%d is not present\n",tar);
    }
    return 0;
}