//7. Nhap vao 2 so a, b. Dam bao a < b. Tinh tong cac so tu a den b. 
#include <stdio.h>
int main()
{
       int a, b;
       int tong = 0;
       do {
              printf ("Nhap vao hai so a, b (a < b) \n";
              scanf ("%d\n", &a);
              scanf ("%d\n", &b);
       } while (a >= b);
       for (int i = a; i <= b; i++) {
              tong = tong + i;
       }
       printf ( "tong cac so tu a den b la: ", tong) ;
       return 0;
       }
