//3. Nhap 2 so l� gi� tri cua thang v� ng�y. Kiem tra xem co l� ng�y thu bao nhi�u trong nam, v� d� l� dang thu may. Gia su rang: ng�y 1/1 l� ng�y thu 2 v� nam kh�ng nhuan
#include <stdio.h>
int main ()
{int a,b,c,y;//c la thang truoc b
printf("Nhap so a la ngay (a>=1 va a<=31), b la thang (b>=1 va b<=12)\n");
scanf("%d\n",&a);
scanf("%d",&b);
	c =1;
	y =0;
if (b==1){
printf("ngay %d, thang %d la ngay thu %d cua nam\n",a, b, a);
	}else while (c<b){
			int  X;// X la so ngay co trong thang c
			if ((c==1)||(c==3)||(c==5)||(c==7)||(c==8)||(c==10)||(c==12)){
				X =31;
				}else if (c==2){
					X=28;
					} else {
						X = 30;
					}
			y = y +X;
			c=c+1;
		}
		printf("ngay %d, thang %d la ngay thu %d cua nam\n",a, b, y+a);
		if ((y+a)%7 == 0){
			printf("Do la ngay chu nhat\n");
		}else {
			printf ("la ngay thu %d \n",((y+a)%7)+1);
		}
return 0;
}
