#include <stdio.h>
int main ()
{
	printf("Nhap ba so A, B, C \n");
	int a;
	printf ("Nhap so A \n");
	scanf ("%d \n", &a);
	printf ("Nhap so B \n");
	int b;
	scanf ("%d \n", &b);
	int c;
	printf ("Nhap so C \n");
	scanf ("%d \n", &c);
	if (a > b) {
		if (a > c ) {
			printf ("%d Max \n",a);
	
		}
		else {
			printf ("%d Max \n",c);
		}
	} else {
		if (b > c) {
			printf ("%d max \n", b);
		} else {
			printf ("%d max \n", c);
		}
	}
}
