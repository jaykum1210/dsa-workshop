#include <stdio.h>

int main(){
    int a,count=0,b,sum=0,mul=1;
    printf("Enter number = ");
    scanf("%d",&a);
    while (a>0)
    {
        b = a%10;
        sum+=b;
        mul *=b;
        a/=10;
    }
    printf("Sum = %d\n",sum);
    printf("Multiplication = %d\n",mul);
    printf("Difference = %d\n",mul-sum);
    return 0;
}