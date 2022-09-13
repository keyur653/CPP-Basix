 //roots of an equation
 #include <iostream.h>
 #include <conio.h>
 #include <math.h>
 int main() {
 int a, b, c;
 double root1,root2;
 clrscr();
 cout << "Enter any 3 numbers.";
 cin >> a >> b >> c;
 root1 = (-b+sqrt(b*b - 4*a*c))/2*a;
 root2 = (-b-sqrt(b*b - 4*a*c))/2*a;
 cout << "The roots of the equation are " <<  root1 << " and " <<  root2 ;
 getch();
 return 0;
 }