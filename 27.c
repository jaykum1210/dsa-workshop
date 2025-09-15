#include <stdio.h>

int mul(int a,int b){
    if (b >10)
    {
        return 0;
    }
    else{
        printf("%d\n",a*b);
        mul(a,b+1);
    }
}

int main(){
    int a,b=1;
    printf("Enter number = ");
    scanf("%d",&a);
    mul(a,b);
    return 0;
}