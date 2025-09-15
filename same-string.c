#include <stdio.h>
#include<string.h>

int main(){
    char a[50],b[50];
    printf("Enter first string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter second string = ");
    fgets(b,sizeof(b),stdin);
    int c = strlen(a);
    int d = strlen(b),found = 0,valid = 1;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j<d; j++)
        {
            found = 0;
            if (a[i] == b[j])
            {
                found = 1;
                break;
            }
            
        }
        if (!found)
        {
            valid = 0;
            break;
        }
        
    }
    if (valid)
    {
        printf("Same string");
    }
    else{
        printf("Not same string");
    }
    return 0;
}