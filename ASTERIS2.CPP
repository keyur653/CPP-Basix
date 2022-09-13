#include<iostream.h>
#include<conio.h>
int main() {
int i,j,n;
clrscr();
cin >> n;
for (i=1;i<=n;i++)
{
	for( j=1;j<=n-i;j++)
	{
	cout << " ";
	}
	for ( j=1;j<=i;j++)
	{
	cout << "* ";
	}
	cout << "\n";
}
for (i=1;i<=n;i++)
{
	for (j=1;j<=i;j++) {
	cout << " " ;
	}
	for (j=1;j<=n-i;j++) {
	cout << "* ";
	}
	cout << "\n";
}
 getch();
return 0;
}