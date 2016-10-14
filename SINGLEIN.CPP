#include<iostream.h>
#include<conio.h>
class area
{
float l,b;
protected:
float ar;
public:
void readdata()
{
cout<<"enter the length and breadth"<<endl;
cin>>l>>b;
}
void calar()
{
ar=l*b;
}
void display()
{
cout<<"area="<<ar<<endl;
}
};
class volume:public area
{
float h,vol;
public:
void read()
{
cout<<"enter the height"<<endl;
cin>>h;
}
void calvol()
{
vol=ar*h;
}
void displayvol()
{
cout<<"volume="<<vol<<endl;
}
};
void main()
{
clrscr();
volume v;
v.readdata();
v.calar();
v.display();
v.read();
v.calvol();
v.displayvol();
getch();
}

