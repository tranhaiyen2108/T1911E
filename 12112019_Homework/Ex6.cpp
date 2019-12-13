// Nhap vao so n; tim so nguyen to be hon so n
   #include <stdio.h>
	int main ()
    {
        int n,i,j, dem=0;
        printf("\n Nhap n: ");
        scanf("%d", &n);
	if (n <1){
		printf ("khong co so Nguyen to be hon %d", n);
		}else if (n == 2){ 
		printf ("So Nguyen to be hon %d la 1", n);
		}else (n >2){
        for (i=2;i<=n;i++)
        {
            for (j=1;j<=i;j++)
            {
                if(i%j==0)
                    dem++;
            }
            if(dem==2)
                printf("%d, ",i);
            dem=0;
        }
      }
Return 0;
    }
