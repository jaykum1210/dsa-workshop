#include <stdio.h>

int pal(int a,int sum){
    if (a==0)
    {
        return sum;
    }
    else{
        int b = a%10;
        sum = sum*10 + b;
        return pal(a/10,sum);
    }
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b = pal(a,0);
    if (a==b)
    {
        printf("Palindrome\n");
    }
    else{
        printf("Not a palindrome\n");
    }
    return 0;
}