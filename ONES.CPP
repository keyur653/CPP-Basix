#include<iostream.h>
#include<conio.h>
int main() {
int i,j,n;
clrscr();
cout<<"\nEnter the number of lines:";
cin >> n;
for (i=1;i<=n;i++)
{
for( j=1;j<=i;j++)
{
cout << "1";
}
cout << "\n";
}
getch();
return 0;
}