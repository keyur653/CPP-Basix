#include<iostream.h>
#include<conio.h>
int main() {
int i,j,n,a;
clrscr();
cin >> n;
for (i=1;i<=n;i++)
{
a=0;
	for (j=1;j<=n-i;j++)
	{
	cout << " ";
	}
	for (j=1;j<=i;j++)
	{
	a=a+1;
	cout << a;
	}
cout << "\n";
}
getch();
return 0;
}
