#include <stdio.h>
#include <string.h>

int main(){
    char a[] = "This is DSA";
    char b[10];
    int count = 0,found = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 65 || a[i]==69 || a[i]==73 || a[i]==79 || a[i]==85 || a[i]==97 || a[i]==101 || a[i]==111 || a[i]==117 || a[i]==105)
        {
            // b[count] = a[i];
            // count++;
            for (int j = count; j>=0; j--)
            {
                if (b[j])
                {
                    /* code */
                }
                
            }
            
        }
    }
    b[count] = '\0';
    printf("%s",b);
    return 0;
}