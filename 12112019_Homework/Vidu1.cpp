//nhap vao mot so n, in ra tat ca cac so nghich dao tu 1 den n

#include <stdio.h>
int main()
{
	int n, m;
	printf ("Nhap vao so n muon doan nguoc \n");
	printf ("n = ");
    scanf("%d", &n);
    m =0;
    for (int i =1; i<=n; i++){
    	m = i;
    	printf ("%d", m);
    	//tim so nghich dao cua i
    		int j1 =0;
	    	for (int j =i;j!=0; j/=10){
	        j1 = j1 * 10 + j%10;
			}
			printf ("So nghich dao: %d\n", 12);
			}
	
		return 0;	
	}
// neu co so am thi tách ra 2 doan - n den 0 va 0 den +n bang if else
//trong moi if else thi van dung code tren. chi khac la pham vi chay cua i la i = i-1 (doi voi pham vi -n -> 0)

