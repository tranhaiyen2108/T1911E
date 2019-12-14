//5. In ra các so nghich dao cua các so trong mang 10 so.
#include <stdio.h>
int main ()
{
	int ary[10];
	
	printf("Hay nhap vao 10 gia tri\n");
	for (int i=0;i<10;++i){
		printf("ary[%d] =",i);
		scanf("%d",&ary[i]);
		int z;
		z=0;
			for (; ary[i]!=0; ){
				z =ary[i]%10+z*10;
				ary[i]= ary[i]/10;		
			}
	printf("Dao nguoc cua ary[%d] la: %d\n",i,z);
	ary[i]=z;
	}
	printf("Mang vua dao nguoc tat ca cac phan tu la\n");
	for (int i = 0; i < 10; i++) 	
	{
		printf(" %d ", ary[i]);
	}
	return 0;
}
	




