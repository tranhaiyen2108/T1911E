//Bai 3:
//Cong hai mang vao voi nhau 

#include <stdio.h>

int main()
{
	int a[4][3], b[4][3], c[4][3], d[4][3] ;
	int i, j;
    printf ("Nhap vao ma tran a\n");
    for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("Nhap a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Ma tran a vua nhap la \n") ;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t",a[i][j]); 
		}printf ("\n");
	}
	printf("Nhap vao ma tran b\n") ;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("Nhap b[%d][%d] =",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("Ma tran b moi nhap vao la\n") ;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf ("%d\t",b[i][j]);
		}printf("\n");
	}printf("\n");
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			c[i][j] = a[i][j] + b[i][j];
			d[i][j] = a[i][j] - b[i][j];
		}
	}
	printf( "Mang a cong mang b la\n"); 
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", c[i][j]) ;
		}printf("\n");
	}       
	printf( "Mang a tru mang b la\n"); 
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", d[i][j]) ;
		}printf("\n");
	}   	
    return 0;
}
