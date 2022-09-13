#include<iostream.h>
#include<conio.h>
int main() {
int i,j,n,b=65,a=64;
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
	a=a+1;
	b=a;
	cout << char(b);
	}
cout << "\n";
}
getch();
return 0;
}