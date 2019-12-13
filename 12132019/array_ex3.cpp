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
	int nearMAX=ary[0], MAX = ary[0];
	for (int i = 0; i<n; ++i){
		if (ary[i]>MAX){
			MAX = ary[i];
		}	
	}
	for (int i =0; i<n; ++i){
		if ((ary[i]>nearMAX)&&(ary[i])<MAX){
			nearMAX = ary[i];
		}
	}
	
	printf ("So gan lon nhat trong mang %d la: %d", n,nearMAX);
	return 0;
}
