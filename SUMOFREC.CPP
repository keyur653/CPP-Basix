//sum of reciprocals of n terms
#include<iostream.h>
#include<conio.h>
int main() {
float n,i,sum=1,i2;
clrscr();
cin >> n;
for (i=2;i<=n;i++) {
i2=1/i;
sum=sum+i2;
}
cout <<sum;
getch();
return 0;
}