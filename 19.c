#include <string.h>
#include <stdio.h>

int main(){
    char a[] = "Hello Sir";
    int c = strlen(a);
    char b[c];
    for (int i = 0; i <c; i++)
    {
        b[i] = a[c-i-1];
    }
    b[c] = '\0';
    printf("%s",b);
    printf("\n");
    printf("%s",a);
    return 0;
}