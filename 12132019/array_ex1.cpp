//nhap vao n so va tim so lon nhat trong n so do
#include <stdio.h>
main ()
{ 
	int n ;
	scanf("n\n",&n);
	int ary [n];// kich thuoc cua mang nay la n. De co the set n la size mang thi phai cho input n vao truoc
	for (int i = 0; i <n; ++i){
		scanf ("%d",&ary[i]);
	}
	int high = ary[0];
	for (int i =0; i <n; ++i){
		if (ary[i]>high){
		high = ary [i];	
		}
	}
	printf ("MAX = %d", high);
	return 0;
}
