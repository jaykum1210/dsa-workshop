#include <stdio.h>

int main(){
    int a[4] = {1,2,3,2};
    for (int i = 0; i < 4; i++)
    {
        for (int j = i-1; j >=0; j--)
        {
            if (a[i] == a[j])
            {
                printf("%d is duplicate",a[i]);
                break;
            }
        }
        
    }
    return 0;
}