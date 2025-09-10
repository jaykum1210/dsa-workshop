#include <stdio.h>

int main(){
    int arr[5] = {10,-20,3000,400,50};
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("Largest element = %d\n",max);
    return 0;
}