#include <stdio.h>

 

int main(){

    int n, m;

	printf ("Nhap vao so n muon doan nguoc \n");

	printf ("n = ");

    scanf("%d", &n);

   for (int reverse-n = 0; n >0; n/10){

        m = n % 10;

        reverse-n = reverse-n * 10 + m;

        n = n / 10;

    }

    printf("%d", reverse-n);

}
