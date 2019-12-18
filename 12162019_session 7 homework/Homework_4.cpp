// Ma tran nghich dao

#include <stdio.h>

int main()
{
	int a[4][3], b[3][4];
	int i, j, m;
	printf ("Nhap vao ma tran a\n");
    for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("Nhap a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("nhap vao ma tran a\n") ;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t",a[i][j]); 
		}printf ("\n");
	}
	for (i = 1; i < 4; i++) {
		for (j = 0; j < 1; j++) {
			m = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = m;
		}
		
	}
	printf ("Ma tran dao nguoc la\n");
	for (i= 0; i < 3; i++){
		for (j = 0; j < 4; j++) {
			printf("%d\t",a[i][j]);
		}printf ("\n");
	}printf ("\n");
	return 0;
}
