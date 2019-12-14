// Tinh S = 1 + 1/2 +1 /3 +...1/n
# include <stdio.h>
int main ()
{

//float s;
//printf ("Nhap vao so n: \n");
//scanf ("%d\n", &n);
//For (int i = 1; i <= n; i++){
//	s = s + 1/i;

int count = 1;
int n;
float s =1;
printf ("Nhap vao so n: \n");
scanf ("%d", &n);
while (count <= n){
	s = s + (1/float(count));
	count++;
}
printf ("Ket qua cua S = 1 + 1/2 +1 /3 +...1/n = %f \n ", s);
return 0;
}

