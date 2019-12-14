//1. Tinh trung binh cong các so le trong mang n so
#include <stdio.h>
int main ()
{
	int n;
	printf("Nhap vao so n\n");
	scanf("%d",&n);
	int ary[n];
	for (int i=0;i<n;++i){
		printf("ary[%d] =",i);
		scanf("%d",&ary[i]);
	}int tong, dem;
	tong = dem =0;
	for (int i =0; i<n; ++i){
		if (ary[i]%2!=0){
			dem = dem +1;
			tong = tong + ary[i];
		}
	}printf("Trung binh cong cac so le trong mang la: %f", float(tong)/dem);
	return 0;
}
