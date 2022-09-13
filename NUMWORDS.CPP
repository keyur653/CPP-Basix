//number in words
#include<iostream.h>
#include<conio.h>
void main() {
int n,rev=0,rem,digit;
clrscr();
cin>>n;
while(n!=0)
{
 rem=n%10;
 rev=rev*10+rem;
 n=n/10;
}
//cout<<rev<<endl;
while(rev!=0)
{
digit=rev%10;
rev=rev/10;
switch(digit)
{
 case 0:cout<<"Zero ";
 break;
 case 1:cout<<"One ";
 break;
 case 2:cout<<"Two ";
 break;
 case 3:cout<<"Three ";
 break;
 case 4:cout<<"Four ";
 break;
 case 5:cout<<"Five ";
 break;
 case 6:cout<<"Six ";
 break;
 case 7:cout<<"Seven ";
 break;
 case 8:cout<<"Eight ";
 break;
 case 9:cout<<"Nine ";
 break;
 }
 }
 getch();
 }