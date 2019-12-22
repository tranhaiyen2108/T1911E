//nhap vao mang n chuoi, sap xep chuoi theo thu tu alphabet
#include <stdio.h>
#include <string.h>

int main() {
    int n;
	printf("Nhap vao n = ");
	scanf("%d",&n);
    char lop[n][50];
    char s[50];
    for(int i=0;i<n;i++)
    {
        printf(" Nhap vao ten hoc sinh thu %d: ",i+1);
        scanf("%s", lop[i]);
    }
    char temp[50];
//      for (int i = 1; i < n; i++) {
//      for (int j = 1; j < n; j++) {
//        if (strcmp(lop[j - 1], lop[j]) > 0) {
//            strcpy(temp, lop[j - 1]);
//            strcpy(lop[j - 1], lop[j]);
//            strcpy(lop[j], temp);
//         }
//      }
//   }
	for (int i = 0;i<n;i++){
		for (int j =0;j<strlen(lop[i]);j++){
			if (lop[i][j]>=97&&lop[i][j]<=122){
				lop[i][j]=lop[i][j]-32;
			}
		}
	}
	
    for (int i =0; i<n-1;i++){
    	for (int j =0; j<n-i-1;j++){
	    		if (strcmp(lop[j],lop[j+1])>0){
    		strcpy(temp,lop[j]);
			strcpy(lop[j],lop[j+1]);
			strcpy(lop[j+1],temp);	
			}
		}
	}		
	printf("Danh sach lop xep theo thu tu alphabet la\n");
    for (int i =0; i<n;i++){
    	printf("%s\n",lop[i]);
	}
    
    return 0;
}
