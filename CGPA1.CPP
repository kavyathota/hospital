#include<iostream.h>
#include<conio.h>
class cgpa
{
int marks[6],rno,per[6];
int credit[6];
float cgpa;
char name[20],grade[6];
public:
void read();
void readc();
void calculate();
void display();
};
void cgpa::readc()
{
cout<<"enter no.of credits for each subject:";
for(int i=0;i<6;i++)
cin>>credit[i];
}
void cgpa::display()
{
cout<<"name:"<<name<<endl;
cout<<"roll no.:"<<rno<<endl;
cout<<"\tmarks\t"<<"grade\t"<<"points"<<endl;
for(int i=0;i<6;i++)
cout<<"subjet"<<i+1<<":"<<marks[i]<<"\t"<<grade[i]<<"\t"<<per[i]<<endl;
cout<<"cgpa:"<<cgpa<<endl;
}
void cgpa::calculate()
{
cgpa=0;
int sum=0;
if((grade[0]!='F') && (grade[1]!='F') && (grade[2]!='F') && (grade[3]!='F') && (grade[4]!='F') && (grade[5]!='F'))
{
for(int i=0;i<6;i++)
{
cgpa=cgpa+(credit[i]*per[i]);
}
}
for(int i=0;i<6;i++)
{
sum=sum+credit[i];
}
cgpa=cgpa/sum;
}
void cgpa::read()
{
cout<<"enter name:";
cin>>name;
cout<<"enter roll no.";
cin>>rno;
cout<<"enter marks";
for(int i=0;i<6;i++)
cin>>marks[i];
for(i=0;i<6;i++)
{
if(marks[i]>90)
{
grade[i]='O';
per[i]=10;
}
else if((marks[i]<90)&&(marks[i]>80))
{
grade[i]='A';
per[i]=9;
}
else if((marks[i]<80)&&(marks[i]>70))
{
grade[i]='B';
per[i]=8;
}
else if((marks[i]<70)&&(marks[i]>60))
{
grade[i]='C';
per[i]=7;
}
else if((marks[i]<60)&&(marks[i]>50))
{
grade[i]='D';
per[i]=6;
}
else if((marks[i]<50)&&(marks[i]>40))
{
grade[i]='E';
per[i]=5;
}
else
{
grade[i]='F';
per[i]=0;
}
}
}
void main()
{
int n;
clrscr();
cout<<"enter no.of students";
cin>>n;
cgpa x;
x.readc();
for(int i=0;i<n;i++)
{
cgpa *d=new cgpa;
d->read();
d->calculate();
d->display();
}
getch();
}