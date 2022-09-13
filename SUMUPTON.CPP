//sum upto n terms
#include<iostream.h>
#include<conio.h>
int main() {
int n,i,sum=0;
clrscr();
cin >> n;
for(i=1;i<=n;i++) {
sum = sum + i;
cout << sum << "\n";
}

getch();
return 0;
}