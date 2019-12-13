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
		for (int i = 4; i <= n; ){
			x1 = x2;
			x2 = x3;
			x3 = x1 + x2;
			for (int j = x1; j<=x3;  ){
				if (j<n){
					j = x2;
				}else if (j = x3)
			}
		
	}
			printf ("tong so den so thu %d = %d ", n, tong);
	
	
	}
	return 0;
}
