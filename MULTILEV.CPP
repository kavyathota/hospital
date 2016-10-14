#include<iostream.h>
#include<conio.h>
class person
{
char n[10],s[5];
int age;
public:
void readdata()
{
cout<<"enter name age and sex"<<endl;
cin>>n>>age>>s;
}
void display()
{
cout<<"name=" <<n<<endl<<"age="<<age<<endl<<"sex= " <<s<<endl;
}
};
class student:public person
{
int rno;
char b[10];
public:
void read()
{
cout<<"enter the rollno and branch"<<endl;
cin>>rno>>b;
}
void displaystudent()
{
cout<<"rollno="<<rno<<endl<<"branch="<<b<<endl;
}
};
class result:public student
{
float m[6],percentage,total;
public:
void r()
{
cout<<"enter the marks"<<endl;
for(int i=0;i<6;i++)
cin>>m[i];
}
void d()
{
total=0;
cout<<"result"<<endl;
for(int i=0;i<6;i++)
{
cout<<"enter the marks of subject"<<" "<<i<<"="<<m[i]<<endl;
total=total+m[i];
}
percentage=float(total)/6;
cout<<"total="<<total<<endl<<"percentage="<<percentage<<endl;
}
};
void main()
{
clrscr();
result r;
r.readdata();
r.display();
r.read();
r.displaystudent();
r.r();
r.d();
getch();
 }