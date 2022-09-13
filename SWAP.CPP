/*PRACTIAL PROGRAM #3
Read 2 variables from the user and exchange these values with each other using reference variables and print before and after exchange.*/
#include<iostream.h>
#include<conio.h>
void main(){
int a,b,temp;
clrscr();
cout<<"\nEnter two values:";
cout<<"\nA= "; cin>>a;
cout<<"\nB= "; cin>>b;
clrscr();
cout<<"\nBefore exchange, A= "<<a;
cout<<"\nBefore exchange, B= "<<b;
temp=a;
a=b;
b=temp;
cout<<"\nAfter exchange,A= "<<a;
cout<<"\nAfter exchange,B= "<<b;
getche();
}

