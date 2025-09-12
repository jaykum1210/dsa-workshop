#include <stdio.h>
#include <string.h>

int main(){
    char a[] = "hello my name is jay kumawat";
    int b = strlen(a);
    int count = 1;
    for (int i = 0; i < b; i++)
    {
        if (a[i] == 32)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}