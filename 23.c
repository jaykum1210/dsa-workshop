#include <stdio.h>

int prime(int a){
    int fon = 1;
    for (int i = 2; i <=a/2; i++)
    {
        if (a%i==0)
        {
            fon = 0;
            return 0;
        }else{
            return 1;
        }
    }
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    prime(a);
    if (prime(a)==1)
    {
        printf("Prime number");
    }
    else{
        printf("Not prime");
    }
    
    return 0;
}