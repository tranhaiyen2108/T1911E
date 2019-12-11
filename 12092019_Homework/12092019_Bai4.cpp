#include <stdio.h>
int main ()
{
    int n, m;
	printf ("Nhap vao so n muon doan nguoc \n");
	printf ("n = ");
    scanf("%d", &n);
   for (int reverse_n = 0; n >0; n/10){
        m = n % 10;
        reverse_n = reverse_n * 10 + m;
        n = n / 10;
    }
    printf("%d", reverse_n);
    return 0;
}
