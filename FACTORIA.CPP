 //factorial
 #include <iostream.h>
 #include <conio.h>
 int main() {
 int i,n;
 clrscr();
 cin >> n;
 int fact=1;
 for(i=1;i<=n;i++) {
 fact=fact*i;
 }
 cout << fact;
 getch();
 return 0;
 }
