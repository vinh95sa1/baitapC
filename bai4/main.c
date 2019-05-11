#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0, array[4], a = 0;
    printf("Bai 4:\n");
    for( i = 0; i < 4; i++)
    {
        printf("Nhap phan tu thu %d cua mang:\n", i + 1);
        scanf("%d", &array[i]);
    }
    for(i = 0; i < 4; i++)
    {
        if (array[i] % 3 == 0)
        {
            a = 1;
            break;
        }
    }
    if(a == 1)
        printf("Phan tu dau tien trong mang chia het cho 3 la: %d\n", array[i]);
    else
        printf("Trong mang khong co phan tu nao chia het cho 3!!");

    return 0;
}
