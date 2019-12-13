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
	printf("So le trong mang la: ");
	for (int i = 0; i<n; ++i){
		if ((ary[i]%2)!=0){
			printf ("%d ,", ary[i]);
		}
	}
return 0;
}
