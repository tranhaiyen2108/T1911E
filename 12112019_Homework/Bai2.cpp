//

#include <stdio.h>
int main ()
{
	for (int i = 1; i <=4; i++){
		printf ("\n");
		printf ("|");
		for (int j = 1; j <= 6; j++){
			printf ("*");
		}
		printf ("|");
	}
	return 0;
}
