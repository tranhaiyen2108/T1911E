//Nhap mang n so nguyen, tim so duong nho nhat
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
	int nguyenDuong;
	for (int i =0; i<n; i++){
		for (int j = 0; j>0, j<n;j++){
			if (ary[j]>0){
				nguyenDuong = ary[j];
				break;
			}
		} 
		if (nguyenDuong > ary[i]){
			nguyenDuong = ary[i];
		}
	}
printf ("So nguyen nho nhat la %d", nguyenDuong);	
return 0;
}
