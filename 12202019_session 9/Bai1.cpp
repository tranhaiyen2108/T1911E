//1. Nhap 1 mang n chuoi tu bàn phím. Sau dó nhap 1 chuoi s và kiem tra xem s có nam trong mang hay không.
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
    char s[50];
    printf ("Nhap vao mot ten de kiem tra: ");
    scanf("%s",s);
    int i =0;
	for (i = 0;i<n;i++){
		if (strcmp(array[i],s)==0){
			printf("Ten %s co nam trong chuoi",s);
			break;
		}
	}
	if (i>=n){ //Neu chuoi s khong trong chuoi, thi khi den day, i = i+1; tuc la i >=n
	printf("Ten %s khong co nam trong chuoi",s);
	}
	
	return 0;
}

