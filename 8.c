#include <stdio.h>

int main(){
    int a[5] = {10,20,30,40,50};
    int b[5] = {20,30,60,70,80};
    int c[5] = {0},count=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i] == b[j])
            {
                c[count] = a[i];
                count++;
                break;
            }
            
        }
        
    }
    printf("Same Integer = ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}