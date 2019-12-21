//tim hang co tong gia tri lon nhat 4x4
#include <stdio.h>

int timkiem(int a[][4], unsigned int n){
    int max;
    int vitri;
    for (int i =0; i< n;++i){
    	int x = 0;
        for (int j = 0; j< 4; ++j){
            x = x +a[i][j];
            if(i==0){
			max = x;
			} 
            if (x > max){
                max =x;  
                vitri=i; 
            } 
		} 
    }
    return vitri;
}

void nhapmang(int a[][4], unsigned int n){
    for (int i=0; i<n;i++){
    	for (int j =0; j<n;j++){
    	printf("Nhap a[%d][%d] = ",i,j);
        scanf("%d",&a[i][j]);
		}
    }
    printf("Mang vua nhap la: \n");
    for (int i=0; i<n;i++){
    	for (int j = 0; j<4; j++){
    		printf("%d\t",a[i][j]);
		}	printf("\n");
	}printf("\n");
}

int main()
{
    int a[4][4];
    nhapmang(a,4);
    printf ("Hang co tong lon nhat la:%d ",timkiem(a,4));
    return 0;
}
