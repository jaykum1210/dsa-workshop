#include <stdio.h>

int main(){
    int a[6] = {1,2,3,4,5,6};
    int b;
    printf("Enter target = ");
    scanf("%d",&b);
    int c = 0;
    int d = 5;
    int sum = 0;
    while (c<d)
    {
        if (a[c]+a[d]==b)
        {
            printf("%d %d\n",a[c],a[d]);
            c++;
            d--;
        }
        else if (a[c]+a[d]>b)
        {
            d--;
        }
        else{
            c++;
        }
    }
    return 0;
}