/*Write a program to read a line of text and:
count no of words in it
count no of digits,upper case,lower case and other special characters
replace all space with underscore
delete all space
print old and new line*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main() {
int d=0,s=0,U=0,special=0,length=0
char line[80];
cout<<"\nEnter the line of text: ";
cin.get(line,80,'\n');
length=strlen(line);
for(i=0;i<length;i++)
{
 if(line[i]>='0'&&line[i]<='9')
 d++;
 if(line[i]>='a'&&line[i]<='z')
 s++
 if(line[i]>='A'&&line[i]<='Z')
 u++
 else
 special++;
}
clrscr();
cout<<"\nGiven line of text: "<<line;