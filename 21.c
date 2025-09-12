#include <stdio.h>
#include <string.h>

int main(){
    char a[] = "HELLLO";
    int b = strlen(a);
    for (int i = 0; i < b; i++)
    {
        printf("%c",a[i] + 32);
    }
    return 0;
}