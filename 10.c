#include <stdio.h>

int main(){
    int a[4]={1,2,3,4};
    int mul = 1;
    int b[4];
    for (int i = 0; i < 4; i++)
    {
        mul *= a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        b[i] = mul/a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}