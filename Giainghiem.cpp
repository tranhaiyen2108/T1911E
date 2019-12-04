#include<stdio.h>
#include<math.h>
int main()
{ 	float x1;
	float x2;
	printf ("Nhap so nguyen a, b,c vao phuong trinh a*X^2 + b*X^2 + c = 0 \n");
	float a ;
	printf ("Nhap so a (a # 0)\n");
	scanf ("%d", &a);
	if ( a == 0) {
	printf ("Nhap lai a \n");
	scanf ("%d", &a);
	} else {
		float b;
		printf ("Nhap so b \n");
		scanf ("%d", &b);
		float c;
		printf ("Nhap so c \n");
		scanf ("%d", &c);
		float r;
		r = b*b - 4*a*c;
		if (r < 0) {
		printf ("Phuong trinh vo nghiem\n");
		} else if (r == 0) {
			printf ("Phuong trinh co nghiem kep x1 = x2 =%d \n", -b/(2*a));
			} 
			else {
				r = sqrt(r);
        		x1 = (-b + r) / (2*a);
        		x2 = (-b - r) / (2*a);
				printf ("Phuong trinh co 2 nghiem %d, %d \n", x1, x2);
				}
				}
		
	}


