#include <stdio.h>
#include <string.h>
int main(){
    char a[] = "hii";
    int c = strlen(a),count=0,found = 1;
    char b[c];
    for (int i = c-1; i >=0 ; i--)
    {
        b[count] = a[i];
        count++;
    }
    for (int i = 0; i < c; i++)
    {
        if (a[i]!=b[i])
        {
            found = 0;
        }
    }
    if (found != 0)
    {
        printf("Palindrome\n");
    }
    else{
        printf("Not a Palindrome");
    }
    return 0;
}