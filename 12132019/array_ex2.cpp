// nhap n so nguyen va tinh gia tri trung binh cua mang
#include <stdio.h>
int main()
{	int n;
	printf ("Nhap vao so n\n");
	scanf("%d",&n);
	int ary[n];
	int tong =0;
	printf ("nhap %d so nguyen\n", n);
	for (int i = 0; i <n; ++i){
		printf ("nhap gia tri ary [%d]\n", i);
		scanf ("%d", &ary[i]);
	}
	for (int i =0; i <n; ++i){
		tong = tong + ary[i];
	}
	printf ("gia tri trung binh cua mang la: %f", float(tong)/n );
	return 0;
}
