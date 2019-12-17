// Nhap mang n so nguyen, tim so luong cac so duong lien tiep nhieu nhat
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
	int count, max;
	count = 0;
	max=0;
	for (int i = 0; i <n; i++){
		if(ary[i]>0){
			count++;
		if (count > max){
			max =count;
		}	
		}else {
			count = 0;
		}
	}
	printf ("so luong so duong lien tiep lon nhat la %d", max);
return 0;
}
