#inlude <stdio.h>

int main ()

{

	int n, count;

	count = 0;

	printf ("Nhap vao so n muon kiem tra co ph?i so nguyen to khong, n = \n");

	scanf ("%d \n",&n);

	for (int i = 1; i < n; (n%i) == 0) {

		count = count + 1;

		i++;

	}

	if (count > 2) {

		printf ("%d khong phai la so nguyen to\n",n);

	}

	else {

		printf ("%d la so nguyen to\n",n);

	}

	return 0;

}

