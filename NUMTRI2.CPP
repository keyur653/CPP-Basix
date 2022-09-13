#include<iostream.h>
#include<conio.h>
int main() {
int i,j,n,a;
clrscr();
cin >> n;
for (i=1;i<=n;i++)
{
	for (j=1;j<=i;j++)
	{
	cout << j;
	}
cout << "\n";
}
getch();
return 0;
}
