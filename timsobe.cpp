#include <stdio.h>
int main ()
{
	printf("Nhap ba so A, B, C \n");
	int a;
	printf ("Nhap so A \n");
	scanf ("%d", &a);
	printf ("Nhap so B \n");
	int b;
	scanf ("%d", &b);
	int c;
	printf ("Nhap so C \n");
	scanf ("%d", &c);
	if (a < b) {
		if (a < c ) {
			printf ("%d MIN \n",a);
	
		}
		else {
			printf ("%d MIN \n",c);
		}
	} else {
		if (b < c) {
			printf ("%d MIN \n", b);
		} else {
			printf ("%d MIN \n", c);
		}
	}
}
