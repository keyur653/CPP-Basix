//factors of a number
#include<iostream.h>
#include<conio.h>
int main() {
clrscr();
int n,i;
cout<< "Enter an integer:";
cin>> n;
for(i=1;i<=n;i++){
if(n%i==0){
cout<< i<<" \n";
}
}
getch();
return 0;
}

