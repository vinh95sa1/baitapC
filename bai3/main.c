#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   float b,c,d,p,s;
   printf("Dien tich tam giac (nhap so 1)\n");
   printf("Dien tich hinh vuong (nhap so 2)\n");
   printf("Dien tich hinh chu nhat (nhap so 3)\n");
   printf("Chon hinh can tinh dien tich:\n");
   scanf("%d",&a);
   switch(a)
   {
   case 1:
       printf("Xin moi nhap so do 3 canh cua tam giac:\n");
       scanf("%f",&b);
       scanf("%f",&c);
       scanf("%f",&d);
       p=(b+c+d)/2;
       s=sqrt(p*(p-b)*(p-c)*(p-d));
       printf("Dien tich tam giac la: %.3f",s);
       break;
   case 2:
       printf("Xin moi nhap so do 1 canh:\n");
       scanf("%f",&b);
       s=b*b;
       printf("Dien tich hinh vuong la: %f",s);
       break;
   case 3:
       printf("Xin moi nhap so do chieu dai chieu rong:\n");
       scanf("%f",&b);
       scanf("%f",&c);
       s=b*c;
       printf("Dien tich hinh chu nhat la: %f",s);
       break;
   default:
       printf ("Xin moi chon lai!\n");
       break;
   }
   return 0;
}
