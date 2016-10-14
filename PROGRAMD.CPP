#include<iostream.h>
#include<conio.h>
class y
{
public:
y()
{
cout<<"constructor called in y";
}
};
class x
{
private:
friend y::y();
};
void main()
{
y x;
getch();
}