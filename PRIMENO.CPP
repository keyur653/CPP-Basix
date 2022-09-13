//prime number
#include<iostream.h>
#include<conio.h>
int main() {
 clrscr();
 int n,i,flag=0;
 cout << "Enter any integer: ";
 cin>> n;
 for(i=2;i<n;i++) {
  if(n%i==0) {
   cout<< "its not prime no.";
   flag=1;
   break;
  }
 }
 if(flag==0){
  cout<<"It is Prime,man!!";
 }
 getch();
 return 0;
}
