#include<iostream.h>
#include<conio.h>
void main()
{
int f1,f2,f,n,i;
clrscr();
cout<<"enter a number"<<endl;
cin>>n;
f1=0;
f2=1;
cout<<f1<<endl<<f2<<endl;
for(i=0;i<n-2;i++)
{
f=f1+f2;
cout<<f<<endl;
f1=f2;
f2=f;
}
getch();
}