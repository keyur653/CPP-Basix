#include<iostream.h>
#include<conio.h>
int main() {
int i,j,n,a;
clrscr();
cin >> n;
for (i=2;i<=n+1;i++)
{
	for (j=i-1;j>=1;j--)
	{
	cout << j;
	}
cout << "\n";
}
getch();
return 0;
}
