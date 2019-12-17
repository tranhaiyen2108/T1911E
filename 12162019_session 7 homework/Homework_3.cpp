//Nhap vào 2 ma tran 4x3, Cong tru 2 ma tran và in ra ket qua.
#include <stdio.h>
int main()
{
	int a[4][3],b[4][3],c[4][3];
	int i,j;
	printf("Nhap vao ma tran so 1: 4 x3\n");
	for (i = 0; i <4; i++){
		for (j =0; j<3;j++){
			printf ("a[%d][%d] = ", i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf ("Mang vua nhap vao la: \n");
	for (i =0; i<4; i++){
		for (j =0; j<3; j++){
		printf ("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("Nhap vao ma tran so 2: 4 x3\n");
	for (i = 0; i <4; i++){
		for (j =0; j<3;j++){
			printf ("a[%d][%d] = ", i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}printf ("Mang vua nhap vao la: \n");
	for (i =0; i<4; i++){
		for (j =0; j<3; j++){
			printf ("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf("Nhap vao sau khi cong la:\n");
	for (i = 0; i <4; i++){
		for (j =0; j<3;j++){
			c[i][j]= 0;
			for (int x = 0; x<4;x++){
				for (int y =0; y<3; y++){
					c[i][j] = a[i][j] + b[i][j];
				}
			}
		}
	}
	printf("Ma tran sau cong:\n");
    for(i=0;i<4;j++){ 
        for(j=0;j<3;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
	return 0;
}
