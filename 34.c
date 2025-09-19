#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count=0;
    int b = strlen(a);
    int c[b];
    for (int i = 0; i < b; i++)
    {
        if (a[i]=='a'||a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u'|| a[i]=='A'|| a[i]=='E'|| a[i]=='I'|| a[i]=='O'|| a[i]=='U')
        {
            c[count]=a[i];
            count++;
        }
    }
    for (int i = 0; i < b; i++)
    {
        if (a[i]!='a'&& a[i]!='e'&& a[i]!='i'&& a[i]!='o'&& a[i]!='u'&& a[i]!='A'&& a[i]!='E'&& a[i]!='I'&& a[i]!='O'&& a[i]!='U')
        {
            c[count] = a[i];
            count++;
        }
    }
    printf("String = ");
    for (int i = 0; i < count; i++)
    {
        printf("%c",c[i]);
    }
    return 0;
}