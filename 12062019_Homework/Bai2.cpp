//Nhap vào 1 sa nguyen, in ra là do thu may hoac ko phai ngay trong tuan.
#include <stdio.h>
int main()
{
	int a;
	printf ("Nhap 1 so nguyen a \n");
	scanf ("%d",&a);
	if ((a >=2)&&(a<=8)){
		printf("a la ngay trong tuan va a la thu \n");
		if (a ==8) {
			printf("chu nhat \n");
		} else {
			printf("a la thu %d \n",a);
		}
	} else {
	printf("a khong la ngay trong tuan\n");
	}
	return 0;
}
