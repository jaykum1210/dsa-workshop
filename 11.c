#include <stdio.h>

int main(){
    int a[4]= {1,2,4,5};
    int n = 5;
    int b = n*(n+1)/2;
    int sum = 0;
    for (int i = 0; i < n-1; i++)
    {
        sum+=a[i];
    }
    printf("Missing element = %d\n",b-sum);
    return 0;
}