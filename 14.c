#include <stdio.h>

int main(){
    int a[5] = {7,2,5,1,8};
    int min = a[0],max = a[1],count;
    for (int i = 0; i < 5; i++)
    {
        if (a[i]<min)
        {
            min = a[i];
            count = i;
        }
    }
    for (int i = count; i <5; i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
    }
    printf("Profit = %d\n",max-min);
    return 0;
}