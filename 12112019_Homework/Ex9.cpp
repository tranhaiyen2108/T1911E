//nhap vao mot so Nguyen duong n. Tinh tong cac chu so cua n
int main()
{
       int n;
       int tong = 0;
       do {
              printf ("Nhap vao mot so nguyen duong n (n>0) \n");
              scanf("%d\n",&n);
       } while (n <= 0);
       while (n > 0) {
              tong = tong + n % 10;
              n = n / 10;
       }
       printf( "tong cac chu so cua so n la: ", tong);
       return 0;
       }
