//sum of squares of n terms
#include<iostream.h>
#include<conio.h>
int main() {
int n,sum=0,i,i2;
clrscr();
cin >>n;
for (i=1;i<=n;i++) {
i2=i*i;
sum  = sum +i2;
cout << sum<< "\n";
}
getch();
return 0;
}