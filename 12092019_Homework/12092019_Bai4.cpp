#include <stdio.h>
int main ()
{
    int n, m;
	printf ("Nhap vao so n muon doan nguoc \n");
	printf ("n = ");
    scanf("%d", &n);
    int z;
   for (z = 0; n >0; n/10){
        m = n % 10;
        z = z * 10 + m;
        n = n / 10;
    }
    printf("%d", z);
    return 0;
}
