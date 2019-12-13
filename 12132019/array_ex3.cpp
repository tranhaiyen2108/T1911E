// tim so gan lon nhat trong mang n so
#include <stdio.h>
int main()

{	int n;
	printf ("Nhap vao so n\n");
	scanf("%d",&n);
	int ary[n];
	printf ("nhap %d so nguyen\n", n);
	for (int i = 0; i <n; ++i){
		printf ("nhap gia tri ary [%d]\n", i);
		scanf ("%d", &ary[i]);
	}
	int  MAX, min;
	MAX, min = ary[0];
	for (int i = 0; i<n; ++i){
		if (ary[i]>MAX){
			MAX = ary[i];
		}	
			if (ary[i]<min){
			min = ary[i];
		}
	}int nearMAX, nearmin;
	//nearMAX = nearmin = ary[0]; gan nhu the nay se bi loi. vi khi ary[0] la so be max thi khong th tim ra so max, tuong tu voi min
	if (MAX == min){
		printf ("Day so bang nhau");
	}else {
	//Cach 1: cach nay nhanh nhung kho expand
	nearmin = MAX;
	nearMAX = min;
		for (int i =0; i<n; ++i){
			if ((ary[i]>nearMAX)&&(ary[i])<MAX){
				nearMAX = ary[i];
			}
			if ((ary[i]<nearmin)&&(ary[i]>min)){
				nearmin = ary[i];
			}
		}
	}
	printf ("So gan lon nhat trong mang %d la: %d\n", n,nearMAX);
	printf ("So gan be nhat trong mang %d la: %d\n", n,nearmin);
	return 0;
}
//Cach 2:
// cach khac, gan gia i initial cua nearMAx, nearmin khac voi MAX, Min
// thay doan line 24 - line 29
//nearMAX = nearmin = ary[0];
//for (int i = 0; i<n; ++i){
//if (ary[i]<max){
//nearMAX = ary[i];
//}break;
//for (int i = 0; i<n; ++i){
//if (ary[i]>min){
//nearMAX = ary[i];
//}break;


