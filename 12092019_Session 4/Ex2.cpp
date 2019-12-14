//tinh tong 100 so le >0 dau tien
#include <stdio.h>
int main ()
{
	
	//int i = 1;
	//int s;
//	int count;
	//printf ("Nhap so so le tinh tu 0 muon tinh tong\n");
//	scanf("%d",&count);
//	s=0;
//	while (((i%2)!=1)&&(i<=count*2)){
//		s = s +i;
//		i++;
//	}
//	printf("Tong %d so le tinh tu 0 = %d\n", count, s);
	// i la so luong so lay vao
	int count;
	int s=0;
	printf ("Nhap so so le tinh tu 0 muon tinh tong\n");
	scanf("%d",&count);
	for (int i =0, number =0; i <count; number++) // khi khai bao 2 bien trong FOR thi Only use ont (data type)
	{
		if (number%2!=0){
			s+=number;
			i++;
		}
	}
	printf("Tong %d so le tinh tu 0 = %d \n", count, s);
	return 0;
}
