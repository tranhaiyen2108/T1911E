//Nhap vao hai chuoi s1, s2. Kiem tra xem chuoi s1 co chua s2 khong
#include <stdio.h>
#include <string.h>

int main(){
	char s1[50], s2[50];
	printf ("Nhap vap chuoi s1: ");
	scanf("%s",s1);
	printf ("Nhap vap chuoi s2: ");
	scanf("%s",s2);
	int dem =0;
	if (strlen(s2)<strlen(s1)){
		printf("\n");
	}else {
		for (int i =0; i<strlen(s1);i++ ){
			for (int j = 0; j<strlen(s2);j++){
				if (s2[j]==s1[i]){
					printf("%s",s2[j]);
					dem ++;
				}
			}	
		}
	}
	if (dem==strlen(s1)){
		printf("chuoi s1 nam trong chuoi s2");
	}else {
		printf("chuoi s1 khong nam trong chuoi s2");
	}

	return 0;
}
