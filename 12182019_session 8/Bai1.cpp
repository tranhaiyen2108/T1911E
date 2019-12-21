//Kiem tra so x co trong mang hay khong
#include <stdio.h>

void nhapmang(int a[], unsigned int n){
    for (int i=0; i<n;i++){
        printf("Nhap a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}

bool kiemtra(int a[], unsigned int n, int x){
    for (int i =0; i<n; i++){
        if (a[i]==x) {
            return true;
        }else {
            return false;
        }
    }
}


int main()
{
    int a[5];
    printf ("Nhap vao mang\n");
    nhapmang (a,5);
    int x;
    printf("Nhap vao so x = ");
    scanf ("%d\n",&x);
    if (kiemtra(a,5,x)){
        printf ("%d co trong mang\n",x); 
    }else {
        printf ("%d khong co trong mang\n",x);
    }
    return 0;
}
