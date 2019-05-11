#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char c[30];
    int i, j;
    printf("Moi nhap chuoi ki  tu:");
    gets(c);

    while(c[0]=='\0')
    {
        printf("Ban chua nhap chuoi!\n" );
        printf("Moi nhap lai");
        gets(c);
    }

    while(c[0]==' ')
    {
        j=0;
        while(c[j+1]!='0');
        {
            c[j]=c[j+1];
            j++;
        }
        c[j]='\0';
    }
    while (c[strlen(c)-1]==' ')
        c[strlen(c)-1]=='\0';

    for (i = 0; c[i]!='\0'; i++)
    {
        if((c[i]==' ')&(c[i-1]==' '))
        {
            j=i;
            while(c[j+1]!='\0')
            {
                c[j]=c[j+1];
                j++;
            }
            c[j]='\0';
            i--;
        }
        c[i] = tolower(c[i]);
    }
    c[0] = toupper(c[0]);
    printf("Chuoi sau chuan hoa: %s\n", c);

}
