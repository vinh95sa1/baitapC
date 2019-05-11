#include <stdio.h>

int main()
{
    int i, x, max=rand();
    printf("10 so ngau nhien:\n%d\n",max);
    for(i=1;i<10;i++)
    {
        x=rand();
        printf("%d\n",x);
        if(max<x)
            max=x;
    }
    printf("So lon nhat la: %d",max);
}
