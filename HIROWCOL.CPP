#include<iostream.h>
#include<conio.h>
int main() {
int i,j,no_col,no_row;
clrscr();
cout<<"\nEnter the no. of columns:";
cin>>no_col;
cout<<"\nEnter the no. of rows:";
cin>>no_row;
for ( i=1;i<=no_row;i++) {
for(j=1;j<=no_col;j++) {
cout << "Hi	";
}
cout << "\n";
}
getch();
return 0;
}