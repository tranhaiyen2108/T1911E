//2. Tính trung bình cong các so le o vi trí chan trong mang n so
#include <stdio.h>
int main ()
{
	int n;
	do {
		printf("Nhap vao so n (n>0)\n");
	scanf("%d",&n);
	}while (n<=0);
	int ary[n];
	for (int i=0;i<n;++i){
		printf("ary[%d] =",i);
		scanf("%d",&ary[i]);
	}
	int tong, dem;
	tong = dem =0;
	for (int i =0; i<n; ++i){
		if ((i%2==0)&&(ary[i]%2!=0)){
			dem = dem +1;
			tong = tong + ary[i];
		}
	}printf("Trung binh cong cac so le tai vi tri chan trong mang la: %f", float(tong)/dem);
	
	return 0;
}
