#include<stdio.h>
 
int main() 
{
    
    int ar[4][4];
    printf("Nhap mang: \n");
	for (int i =0; i<4; i++){
		for (int j =0; j<4; j++){
			printf("Nhap a[%d][%d] = ", i, j);
            scanf("%d", &ar[i][j]);
		}
		printf("\n");
	}
	printf("Ma tran vua nhap:\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d\t",ar[i][j]);
		}
		printf("\n");
	}
    int tong1 ;
    tong1 =0;
    //duong cheo 1
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i ==j){
            tong1 =tong1+ ar[i][j];	
			}
        }
        
    }printf("duong cheo 1 %f\n",float(tong1)/4);

    //duong cheo 2
    int tong2 =0;
    for (int i = 0; i <4; i++) {
        for (int j = 3; j =0; j--) {
        	if (j = 3-i){
        	tong2+= ar[i][j];	
			}
        }
    }printf(" duong cheo 2 %f\n",float(tong2)/4);
    
    
    return 0;
}
