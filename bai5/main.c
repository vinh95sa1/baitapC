#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, nchar, nword, nline;
    nchar = nword = nline = 0;
    while((c = getchar()) != EOF)
    {
        if(c == '\n')
            nline++;
        if(c == ' ' || c == '\t' || c == '\n')
            nword++;
        else
            nchar++;
    }
    printf("Lines\tWords\tCharacter\n %d\t %d\t %d\n", nline, nword, nchar);

return 0;
}
