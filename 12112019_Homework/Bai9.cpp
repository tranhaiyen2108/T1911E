//10. nhap vao hai so a, b. Tim uoc chung lon nhat cua a, b
#include <stdio.h>
int main()
{
       int a, b, uoc;
       uoc = 0;
      printf( "Nhap vao 2 so nguyen duong\n");
       do {
             printf ( "nhap so a\n");
              scanf("%d",&a);
       } while (a <= 0);
       do {
              printf("nhap so b\n");
              scanf("%d",&b);
       } while (b <= 0);
       for (int i = 1 ; i <= a;i++) {
              if ((a % i) == 0 && (b % i) == 0) {
                     uoc = i;
              }
       }
       printf( "Uoc chung lon nhat cua a, b la: ",uoc);
       return 0;
       }
