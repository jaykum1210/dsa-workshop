#include <stdio.h>

int main(){
    int a[5] = {1,2,3,4,5};
    int b,sum;
    printf("Enter target = ");
    scanf("%d",&b);
    int c[5];
    c[0] = a[0];
    c[1] = a[1];
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j<5; j++)
        {
            for (int k = j+1; k<5; k++)
            {
                if (a[i]+a[j]+a[k] == b)
                {
                    printf("%d %d %d\n",a[i],a[j],a[k]);
                }
            }
        }
    }
    return 0;
}