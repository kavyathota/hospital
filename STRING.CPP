
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[]="hello";
char str2[]="world";
char str3[20];
int len;
clrscr();
strcpy(str3,str1);
cout<<"str3:"<<str3<<endl;
strcat(str3,str2);
cout<<"str3:"<<str3<<endl;
len=strlen(str3);
cout<<"lenght:"<<len<<endl;
getch();
}