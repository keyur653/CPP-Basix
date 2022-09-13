//HCF and LCM
#include <iostream.h>
#include <conio.h>
int main() {
int n,i,a,b;
clrscr();
cout<<"\nEnter 2 integers to find its gcd/hcf and lcm:";
cin >> a >> b;
if(a>b) {
n=b;
}
else {
n=a;
}
for(i=n;i>=1;i--) {
if(a%i==0 && b%i==0) {
cout <<"GCD = " << i << " and LCM = " << (a*b)/i;
break;
}
}
getch();
return 0;
}