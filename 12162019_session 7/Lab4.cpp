//nhap mang n so nguyen, tim xem chuoi so duong ma co tong so lon nhat la bao nhieu
#include <stdio.h>
int main ()
{
	int n;
	do {
	printf("Hay nhap vao mot so nguyen lon hon 0\n");	
	scanf("%d",&n);
	} while (n<=0);
	int ary[n];
	for (int i=0;i<n;++i){
	printf("ary[%d] =",i);
	scanf("%d",&ary[i]);
	}
	int tong =0;
	int max =0;
	for (int i =0; i<n; i++){
		if (ary[i]>0){
			tong+=ary[i];
		}else {
			tong =0;	
		}if (tong >max)	{
			max = tong;
			printf ("%d %\\ \t",ary[i]);
		}
		
	}
	printf ("\n");
	printf("Tong chuoi so duong lon nhat %d",max);
return 0;
}
