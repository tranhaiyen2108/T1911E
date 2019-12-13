// tim so thu n trong day so Fibonacci
// biet rang day Fibonacci bat dau bang so 1, 1. So thu 3 la tong cua 2 so truoc
#include <stdio.h>
int main ()
{
	int n;
	printf("Nhap vao so n = ");
	scanf ("%d",&n);
	if (n<=0){
		printf ("khong tim duoc \n");
	}else if (n <3){
		printf ("so thu %d = %d \n", n, 1);
	}else if (n <4){
		printf ("so thu %d = %d \n", n, 2);
	}else {
		int x1=1, x2 = 1, x3=2;
		for (int i =4; i <= n; ++i){
			x1 = x2;
			x2 = x3;
			x3 = x1 + x2;
		}
		printf ("So thu %d cua day fibonacci la: %d", n, x3);
	}
	return 0;
	}

	
	
	
	

