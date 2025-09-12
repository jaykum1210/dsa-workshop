#include <stdio.h>
#include <string.h>

int main(){
    char a[] = "hello sir";
    for (int i = 0; i < strlen(a); i++)
    {
        printf("%c\n",a[i]);
    }
    return 0;
}