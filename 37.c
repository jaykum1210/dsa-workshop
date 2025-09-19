#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    char count1[100];
    char count2[100];
    int min1=0,min2=0;
    for (int i = 0; i < b; i++)
    {
        if (a[i]==40 || a[i]==91 || a[i]==123 || a[i]==60)
        {
            count1[min1] = a[i];
            min1++;
        }
        else if (a[i]==41 || a[i]==93 || a[i]==125 ||a[i]==62)
        {
            count2[min2] = a[i];
            min2++;
        }
    }
    if (min1!=min2){
        printf("Not Balanced\n");
        return 0;
    }
    
    int found = 1;
    for (int i = 0; i < min1; i++)
    {
        if (!((count1[i] == 40 && count2[i] == 41) ||
              (count1[i] == 91 && count2[i] == 93) ||
              (count1[i] == 123 && count2[i] == 125) ||
              (count1[i] == 60 && count2[i] == 62))) {
            found = 0;
            break;
        }
    }
    if (found == 1)
    {
        printf("Balanced");
    }
    return 0;
    
}