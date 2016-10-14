#include<iostream.h>
#include<conio.h>
class array
{
int *a,s;
public:
void sort();
void read(int);
void display();
};
void array::read(int z)
{
s=z;
a=new(int[s]);
cout<<"enter array ";
for(int i=0;i<s;i++)
cin>>a[i];
}
void array::display()
{
cout<<"array";
for(int i=0;i<s;i++)
cout<<a[i]<<"\t";
}
void array::sort()
{
int c;
for(int i=0;i<s/2;i++)
{
for(int j=0;j<s/2;j++)
{
if(a[i]<a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
for(i=s/2;i<s;i++)
{
for(int j=s/2;j<s;j++)
{
if(a[i]>a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
}
void main()
{
array x;
int n;
clrscr();
cout<<"enter array size";
cin>>n;
x.read(n);
cout<<"before sorting:";
x.display();
x.sort();
cout<<"after sorting:";
x.display();
getch();
}