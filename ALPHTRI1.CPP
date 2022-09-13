#include<iostream.h>
#include<conio.h>
int main() {
int i,j,n,a;
clrscr();
cin >> n;
for (i=1;i<=n;i++)
{
	for (j=1;j<=n-i;j++)
	{
	cout << " ";
	}
	for (j=1;j<=i;j++)
	{
	cout << char(j+64) ;
	}
	for (j=i-1;j>=1;j--)
	{
	cout << char(j+64) ;
	}
cout << "\n";
}
getch();
return 0;
}