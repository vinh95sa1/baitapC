#include <stdio.h>

int main()
{
    int n, m, max, min;
    printf("Nhap hang ma tran:\n");
    scanf("%d",&n);
    printf("Nhap cot ma tran:\n");
    scanf("%d",&m);
    printf("Nhap vao ma tran:\n");

    int x[n][m];
    for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                {
                    printf("x[%d] [%d] =", i,j);
                    scanf("%d", &x[i][j]);
                }
        }
    printf("Ma tran:\n");
    for(int i=0; i<n; i++)
        {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<n; i++)
    {
        max = x[i][0];
        min = x[i][0];
        for(int j=0;j<m;j++)
        {
            if(max<x[i][j])
                max = x[i][j];
            if(min>x[i][j])
                min = x[i][j];
        }
        if(max==min)
            printf("Hang %d: max = min = %d\n", i+1, max);
        else{
            printf("Hang %d: max = %d\t", i+1, max);
            printf("min = %d\n", min);
        }
    }
}

