//sum of reciprocals of factorials of n terms
#include<iostream.h>
#include<conio.h>
int main() {
float i,i2,sum=0,n,fact=1;
clrscr();
cin >> n;
for (i=1;i<=n;i++) {
fact= fact*i;
i2=1/fact;
sum=sum +i2;
}
cout <<sum;
getch();
return 0;
}