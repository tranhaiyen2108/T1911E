// In ra man hinh ke qua sau 

#include <stdio.h>
int main (){
int n;
printf ("nhap n \n");
scanf ("%d",&n);

	for (int i=1; i<=n; i++){
		printf ("\n");
		for (int j = 1; j <= i; j++){
			printf ("*");
		}
	}
	return 0;
}
