#include <stdio.h>

int main(){
    int a[5] = {10,20,30,40,50};
    int b = 0,c = 4;
    while (b<c)
    {
        int temp = a[b];
        a[b] = a[c];
        a[c] = temp;
        b++;
        c--;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;   
}