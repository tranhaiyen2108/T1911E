#inlude <stdio.h>

int main ()

{

	int a, b, c;

	printf (" Nhap 3 so a, b, c la 3 canh tam giac \n");

	do {

		printf (" Nhap a \n");

		scanf (%d,& a);

		printf (" Nhap b \n");

		scanf (%d,& b);

		printf (" Nhap c \n");

		scanf (%d,& c);

		printf (" 3 so a, b, c khong hop le. Nhap lai \n");

	} while ((a + b) > c || (c + b) > a || (a + c) > b);



	return 0;

}
