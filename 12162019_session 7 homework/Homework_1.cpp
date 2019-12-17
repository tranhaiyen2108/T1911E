//nhap vao 1 mang n cac so, va nhap vao 1 so x. tim xem x co mang trong mang khong, neu co thi vi tri gan nhat la vi tri nao
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, min;
    do {
    printf ("Nhap vao mot so n lon hon 0\n");
    scanf ("%d",&n);
    } while (n<=0);
    int ar[n];
    for (int i = 0; i<n; i++){
       printf ("ar[%d]= ", i);
       scanf ("%d",&ar[i]);
    }printf("Nhap vao mot so x = ");
    scanf ("%d",&x);
    for (int i = 0; i<n; i++) {
        if (ar[i]==x){
            printf ("So %d co trong mang. Vi tri %d trong mang la ar[%d] = %d\n",x,x,i,ar[i]);
            break;
		}
	}
	int near =0;
    int viTri = 0;
    for (int i = 0; i<n; i++){
        min = x;
        if (abs(ar[i]-x)<min) {
            min = abs(ar[i]-x);
               	near = ar[i];  
	viTri=i;
        }  
    }  
    printf ("So %d khong ton tai trong mang.\n",x);
	printf ("Vi tri so gan voi %d trong mang la ar[%d] = %d\n",x,viTri,near);

    return 0;
}
