//Nhap 2 so nuyen a, b. Neu a>= b thi in ra ket qua a/b; nguoc lai thi in ra ket qua a * b
#include <stdio.h>
int main ()
{
	int a, b;
	printf ("Nhap 2 so nguyen a, b \n");
	scanf ("%d",&a);
	scanf ("%d",&b);
	if (a >= b){
		if (b==0){
			printf(" a khong chia cho 0 duoc \n"); // Luc dau, thieu truong hop b =0
		}else {
			printf("Ket qua la %f \n", float(a)/float(b));
		}
	} else {	
	printf ("Ket qua la %d \n",(a*b));}
	return 0;
}
