// nhap vao mang n so nguyen, tim so le cuoi cung trong mang 
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
	int so_le = 0;
	for (int i = 0; i <n; i++){
		if (ary[i]%2!=0){
			so_le = ary[i];
		};
	}
	if (so_le==0){
		printf("Trong mang khong co so le\n");
	}else {
		printf ("So le cuoi cung cua mang la %d", so_le);
	}
	return 0;
}
