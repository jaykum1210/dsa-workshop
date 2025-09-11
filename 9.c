#include <stdio.h>

int main(){
    int a[9] = {1,2,3,4,0,0,1,2,0};
    int b[9],count=0;
    for (int i = 0; i < 9; i++)
    {
        if (a[i]!=0)
        {
            b[count] = a[i];
            count++;
        }
    }
    for (int i = count; i < 9; i++)
        {
            b[i] = 0;
        }
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}