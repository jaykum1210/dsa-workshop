#include <stdio.h>

int main(){
    int a[5] = {1,2,3,2,2};
    int count = 0;
    int target;
    printf("Enter target = ");
    scanf("%d",&target);
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == target)
        {
            count++;
        }
    }
    printf("Frequency = %d\n",count);
    return 0;
}