#include <stdio.h>

int main(){
    int a[7] = {1,1,2,2,4,3,3};
    int b[7];
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i-1; j>=0; j--)
        {
            if (a[i] == a[j])
            {
                b[count] = a[i];
                count++;
                break;
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}