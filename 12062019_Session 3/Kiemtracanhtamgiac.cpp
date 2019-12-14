//Nhap vao so a,b,c. Kiem tra xem có phai là 3 canh tam giac hay khong. Neu dung thì tinh va in ra chu vi va dien tich tam giac

#include<stdio.h>
#include <math.h>
int main ()
{
printf ("Kiem tra 3 so co phai la canh cua mot tam giac khong \n");	
int a, b, c;
printf ("Nhap vao so a \n");
scanf ("%d", &a);
printf ("Nhap vao so b \n");
scanf ("%d", &b);
printf ("Nhap vao so c \n");
scanf ("%d", &c);
	if ((a+b)>c && (a+c)>b && (b+c)>a)
	{
		printf ("a, b,c la ba canh cua mot tam giac \n");
		int v ;
		v = a+b+c;    // Bien v, p, f la bien dia phuong (local variable). No chi dung duoc trong khuc dieu kien if la TRUE. Neu de bien nay vao phan FALSE, thi se bao error la bien chua khai bao
		printf ("Chu vi cua hinh tam giac la: %d \n",v);
		float p = float(v)/2;
		float f = sqrt(p*(p-a)*(p-b)*(p-c));
		printf ("Nua chu vi tam giac la %f\n",p);
		printf ("Dien tich hinh tam giac la: %f \n", f);
	}else {
		printf("a, b,c khong phai ba canh cua mot tam giac \n");
	}
return 0;
}
