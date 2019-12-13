#include <stdio.h>
int main ()
{
	int n;
	printf("Nhap vao so n = ");
	scanf ("%d",&n);
	if (n<=0){
		printf ("khong tim duoc \n");
	}else if (n <3){
		printf ("so thuoc day fibonacci be hon %d = %d \n", n, 1);
	}else if (n <4){
		printf ("so thuoc day fibonacci be hon %d = %d \n", n, 2);
	}else {
		int x1=1, x2 = 1, x3=2;
		for ( ; x2 + x3 <=n; ) {
			x1 = x2;
			x2 = x3;
			x3 = x1 + x2;
			}
		printf ("So can tim: %d\n", x3)	;
		}
			return 0;
	}
	
	
	



