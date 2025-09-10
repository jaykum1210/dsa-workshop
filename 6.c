#include <stdio.h>

int main(){
    int a[5] = {10,20,30,40,50};
    int b[5];
    int sum = 0;
    b[0] = a[0];
    for (int i = 1; i < 5; i++)
    {
        b[i] = b[i-1] + a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}