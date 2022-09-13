#include<iostream.h>
#include<conio.h>
int main() {
int i,j,n,a,b;
clrscr();
cin >> n;
for (i=1;i<=n;i++)
{
  if(i%2!=0)  {
		 for (j=1;j<=i;j++)
		 {
		 cout << j ;
		 }
	       }

  else  {
  a=i;
		 for (j=1;j<=i;j++)
		 {
		 cout << a;
		 a--;
		 }

	       }

cout << "\n";
}
getch();
return 0;
}