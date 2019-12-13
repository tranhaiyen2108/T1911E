//nhap vao mang 10 so le
#include <stdio.h>
int main()
{
	int ary[10];
	printf("nhap vao 10 so le. (Sai se phai nhao lai)\n");
	for (int i =0; i<10; ++i){
		do {
		printf("ary[%d] =",i);
		scanf("%d",&ary[i]);	
		}while ((ary[i]%2)==0);
		
	}
	return 0;
}
