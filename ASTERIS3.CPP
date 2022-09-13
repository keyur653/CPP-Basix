#include<iostream.h>
#include<conio.h>
int main() {
int i,j,n;
clrscr();
cout << "Enter an odd no.";
cin >> n;
if(n%2!=0) {
for (i=1;i<=n;i+=2)
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
for (i=1;i<=n-1;i+=2)
{
	for( j=1;j<=i;j++)
	{
	cout << " ";
	}
	for ( j=1;j<=n-i-1;j++)
	{
	cout << " *";
	}
	cout << "\n";
}
}
else {
cout << "\nInvalid Input";
}
 getch();
return 0;
}