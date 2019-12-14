//4. Nhap 1 mang n phan tu voi dieu kien không duoc nhap trùng so
#include <stdio.h>
int main ()
{
	int n;
	printf("Nhap vao so n\n");
	scanf("%d",&n);
	int ary[n];
	printf("Hay nhap vao cac gia tri khong trung nhau. Neu trung nhau thi nhap lai\n");
	for (int i=0;i<n;++i){
		printf("ary[%d] =",i);
		scanf("%d",&ary[i]);
		for (int j=0; j<i; ++j){
			while (ary[i]==ary[j]){
				printf("Nhap lai ary[%d] =",i);
				scanf("%d",&ary[i]);
			}		
		}		
	}
	printf("Mang vua moi nhap la\n");
	for (int i = 0; i < n; i++) 	
	{
		printf(" %d ", ary[i]);
	}
	return 0;
}
