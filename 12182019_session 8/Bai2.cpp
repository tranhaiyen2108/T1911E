//Tim so thu n trong day fibonacci 
#include <stdio.h>

int timkiem(unsigned int n){
    int x =0;
    if (n <1){
        x = 0;
        return x;
    }else if (n <=2){
            x = 1;
            return x;
    }else if (n ==3){
    	x = 2;
    	return x;
	}else if (n>=4 ){
        int x1=1, x2 = 1; x=2;
        for (int i =4; i<= n; i++){
			x1 = x2;    
            x2 = x;
            x = x1+x2;
        }
    } return x;
        
}

int main()
{
    int n;
    printf("nhap vao so n = ");
    scanf ("%d",&n);
    printf ("So thu %d trong day Fibonacci la: %d",n,timkiem(n));
    
    return 0;
}
