 //fibonacci series
 #include <iostream.h>
 #include <conio.h>
 int main() {
 int fact,i,a,b,n;
 clrscr();
 a=0;
 b=1;
 cin >> n;
 cout << a << b;
 for(i=1;i<=(n-2);i++) {
 fact=a+b;
 cout << "\t" <<" "<< fact;
 a=b;
 b=fact;
 }
 getch();
 return 0;
 }