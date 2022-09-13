#include<iostream.h>
#include<conio.h>
int main() {
int i,j,n,a=64;
clrscr();
cin >> n;
for (i=1;i<=n;i++)
{
	for (j=1;j<=i;j++)
	{
	a=a+1;
	cout <<char(a);
	}
cout << "\n";
}
getch();
return 0;
}
