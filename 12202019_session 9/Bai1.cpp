//1. Nhap 1 mang n chuoi tu b�n ph�m. Sau d� nhap 1 chuoi s v� kiem tra xem s c� nam trong mang hay kh�ng.
#include <stdio.h>
#include <string.h>

int main() {
    int n;
	printf("Nhap vao n = ");
	scanf("%d",&n);
    char array[n][50];
    for(int i=0;i<n;i++)
    {
        printf(" Nhap vao ten hoc sinh thu %d: ",i+1);
        scanf("%s",array[i]);
    }
    char s[50],d[50];
    printf ("Nhap vao mot ten de kiem tra: ");
    scanf("%s",s);
	for (int i = 0;i<n;i++){
		if (strcmp(array[i],s)==0){
			strcpy(array[i],d);
		}
	}
	if (strcmp(d,s)==0){
	printf("Ten %s co nam trong chuoi",s);
	}else {
	printf("Ten %s khong co nam trong chuoi",s);
	}
	
	return 0;
}

