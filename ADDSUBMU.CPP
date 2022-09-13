//+/-/*/%
#include<iostream.h>
#include<conio.h>
int main() {
int a,b,c,choice;
clrscr();
cout << "Enter any 2 integers:";
cin >> a >> b;
cout << " 1. Sum \n 2. Difference \n 3. Product \n 4.Quotient" ;
cout << "\n Enter the operation to be performed:";
cin >> choice;
switch(choice){
case 1: cout<<a+b;
	break;
case 2: cout<<a-b;
	break;
case 3: cout<<a*b;
	break;
case 4: cout<<a/b;
	break;
default: cout<<"Enter valid input" ;
}
getch();
return 0;
}

