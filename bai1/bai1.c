#include <stdio.h>
#include <stdlib.h>
int main()
{
    float soThuNhat, soThuHai, max;
    printf("Xin moi nhap so thu nhat:\n");
    scanf("%f",&soThuNhat);
    printf("Xin moi nhap so thu hai:\n");
    scanf("%f",&soThuHai);
    max = soThuNhat > soThuHai ? soThuNhat : soThuHai;
    printf("%f", max);

    return 0;
}
