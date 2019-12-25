#include <stdio.h>
#include <math.h>

double chuvi(double a, double b, double c){
	double chuvi;
	chuvi = a+b+c;
	
	return chuvi;
}

double dientich(double a, double b, double c){
	float p = chuvi(a,b,c)/2;
	double dientich;
	dientich = sqrt(p*(p-a)*(p-b)*(p-c));
	
	return dientich;
}
int main (){
	printf ("Nhap vao ba canh cua tam giac. Neu sai se nhap lai\n");
	double a,b,c;
		printf("Nhap vao canh a = ");
		scanf("%lf",&a);
		printf("Nhap vao canh b = ");
		scanf("%lf",&b);
		printf("Nhap vao canh c = ");
		scanf("%lf",&c);
	printf("\n");	
	while (a<=0 ||b<=0 || c<=0 || c>=(a+b) || b>=(a+c) || a>=(b+c)){
		printf("Ban da nhap sai dieu kien canh tam giac. Nhap lai\n");
		printf("Cac canh phai lon hon 0, mot canh khong lon hon tong hai canh con lai\n\n");
		printf("Nhap vao canh a = ");
		scanf("%lf",&a);
		printf("Nhap vao canh b = ");
		scanf("%lf",&b);
		printf("Nhap vao canh c = ");
		scanf("%lf",&c);
	}
	printf("\n");
	printf("Chu vi tam giac la: %lf\n",chuvi(a,b,c));
	printf ("Dien tich cua tam giac la: %lf",dientich(a,b,c));
	
	return 0;
}
