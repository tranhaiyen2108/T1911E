//3. Thay the các phan tu âm có trong mang bang giá tri 0
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
	for (int i=0; i<n;++i){
		if (ary[i]<0){
		printf("Phan tu sau be hon 0, nen se bi thay gia tri\n");	
		break;
		}
	}
	for (int i =0; i<n;++i)
		{
			if (ary[i]<0){	
			ary[i]=0;
			printf("ary[%d] = %d\n",i,ary[i]);
			}
		}
		
	return 0;
}
	
	

