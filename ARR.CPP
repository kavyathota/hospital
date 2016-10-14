#include<iostream.h>
#include<conio.h>
template<class t,int ms>
class list
{
T a[ms];
int size;
public:
list()
{
size=0;
}
void create();
int count();
void insert(t,int);
t deletion(int);
int isfull();
int isempty();
t getele(int);
int getindex(t);
int search(t);
void display();
};
template<class t,int ms>
void list<t,ms>::create()
{
int n,i;
cout<<"enter number of elements initially into the list";
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
size++;
}
}
template<class t,int ms>
int list<t,ms>::count()
{
return(size);
}
template<class t,int ms>
int list<t,ms>::isfull()
{
if(size==ms)
return 1;
else
return 0;
}
template<class t,int ms>
int list<t,ms>::isempty()
{
if(size==1)
return 1;
else
return 0;
}
template<class t,int ms>
void list<t,ms>::insert(t ele,int index)
{
if(isfull())
cout<<"array overflow";
else
{
for(int i=size;i>index;i--)
a[i]=a[i-1];
a[i]=ele;
size++;
}
}
template<class t,int ms>
t list<t,ms>::deletion(int index)
{
if(isempty())
cout<<"array is empty";
else
{
t x=a[index];
for(int i=index;i<size;i++)
a[i]=a[i+1];
size--;
}
return x;
}
template<class t,int ms>
t list<t,ms>::getele(int index)
{
return(a[index]);
}
template<class t,int ms>
int list<t,ms>::getindex(t ele)
{
for(int i=0;i<size;i++)
{
if(a[i]=ele)
return i;
}
}
template<class t,int ms>
int list<t,ms>::search(t ele)
{
int flag=0;
for(i=0;i<size;i++)
{
if(a[i]=ele)
{
flag=1;
break;
}
if(flag==1)
return i;
else
return -1;
}
}
template<class t,int ms>
void list<t,ms>::display()
{
for(int i=0;i<size;i++)
cout<<"a[i]"<<endl;
}
void main()
{
clrscr();
list<int,int>obj1;
do
{
char ch;
int c;
cout<<"enter your choice";
cin>>c;
cout<<"1.insert\n2.delete\n3.count4.getelement\n5.getindex\n6.search\n7.display()\n";
switch(c)
{
case 1:cout<<"enter the element to be inserted and the index of the element";
       cin>>ele>>index;
       insert();
       cout<<"the element inserted is:"<<ele<<endl;
       break;
case 2:cout<<"enter the index of the element to be deleted";
       cin>>index;
       delete();
       cout<<"the element deleted is:"<<x<<endl;
       break;
case 3:count();
       cout<<"the number of elements are:"<<size<<endl;
       break;
case 4:cout<<"the index of the element is:";
       cin>>index;
       getele();
       cout<<"the element is:"<<a[index];
       break;
case 5:cout<<"enter the element whose index is to be found"<<endl;
       cin>>ele;
       getindex();
       cout<<"the index of the element is:"<<i<<endl;
       break;
case 6:cout<<"enter the element to be searched"<<endl;
       cin>>ele;
       search();
       break;
case 7:cout<<"the linear list is"<<endl;
       display();
       break;
}
}while(ch!='n');
}
