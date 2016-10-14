#include<iostream.h>
#include<conio.h>
class area
{
public:
	int radius,ar1,side,side1,side2,ar2,ar3;
	void ar(int r)
	{
	cout<<endl<<"area of circle:";
	ar1=r*r;
	cout<<ar1<<endl;
	}
	void are(int s)
	{
	cout<<endl<<"area of square:";
	ar2=s*s;
	cout<<ar2<<endl;
	}
	void areas(int l,int b)
	{
	cout<<endl<<"area of rectangle:";
	ar3=l*b;
	cout<<ar3<<endl;
	}

};
void main()
{
area a;
clrscr();
cout<<"enter radius"<<endl;
cin>>a.radius;
a.ar(a.radius);
cout<<"enter side"<<endl;
cin>>a.side;
a.are(a.side);
cout<<"enter lenght and breath"<<endl;
cin>>a.side1>>a.side2;
a.areas(a.side1,a.side2);
getch();
}