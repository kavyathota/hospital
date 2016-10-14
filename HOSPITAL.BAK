#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
long int bill[5];
int no[10]={0,0,0,0,0},tbill[5]={0,0,0,0,0},ad=0,da=0;
char doc[10][20]={"cardiologist","dentist","gynecologist","ENT","orthopedic surgeon"};
char room[10][30]={"dormetry","non-ac standard rooms","non-ac vip rooms","ac standard rooms","ac vip rooms"};
static int n=0;
int a[5]={0,0,0,0,0},d[5]={0,0,0,0,0},c[5]={0,0,0,0,0};
class patient
{
protected:
char name[10];
int age;
public:
void read();
};
class admitp:public patient
{
int x,f;
public:
int billp[5];
void discharge();
void admit();
friend void check();
};
admitp obj[100];
void cal()
{
bill[0]=no[0]*800;
bill[1]=no[1]*500;
bill[2]=no[2]*700;
bill[3]=no[3]*600;
bill[4]=no[4]*500;
}
void display()
{
int tot=0,t=0,m;
cal();
cout<<"------------------------------------------------------------------\n";
cout<<"todays details\t\t\t\t\t\t\t \n";
cout<<"------------------------------------------------------------------\n";
cout<<"consultancy\t\t\t\t\t\t\t \n";
cout<<"------------------------------------------------------------------\n";
cout<<"doctor name     \t    no.of pateints \t   total bill   \n";
cout<<doc[0]<<"\t\t\t    "<<no[0]<<"\t\t       "<<bill[0]<<"     \n";
cout<<doc[1]<<"\t\t\t\t    "<<no[1]<<"\t\t       "<<bill[1]<<"     \n";
cout<<doc[2]<<"\t\t\t    "<<no[2]<<"\t\t       "<<bill[2]<<"     \n";
cout<<doc[3]<<"\t\t\t\t    "<<no[3]<<"\t\t       "<<bill[3]<<"     \n";
cout<<doc[4]<<"\t\t    "<<no[4]<<"\t\t       "<<bill[4]<<"     \n";
cout<<"------------------------------------------------------------------\n";
for(int i=0;i<5;i++)
tot=tot+bill[i];
cout<<"inpatient\t\t\t\t\t\t\t \n";
cout<<"------------------------------------------------------------------\n";
cout<<"rooms\t\t\tno.of admits\tno.of dicharges  bill\t \n";
cout<<"------------------------------------------------------------------\n";
cout<<room[0]<<"\t\t       "<<a[0]<<"\t       "<<d[0]<<"\t    "<<c[0]<<"\n";
cout<<room[1]<<"\t       "<<a[1]<<"\t       "<<d[1]<<"\t    "<<c[1]<<"\n";
cout<<room[2]<<"\t       "<<a[2]<<"\t       "<<d[2]<<"\t    "<<c[2]<<"\n";
cout<<room[3]<<"\t       "<<a[3]<<"\t       "<<d[3]<<"\t    "<<c[3]<<"\n";
cout<<room[4]<<"\t\t       "<<a[4]<<"\t       "<<d[4]<<"\t    "<<c[4]<<"\n";
cout<<"------------------------------------------------------------------\n";
for(i=0;i<5;i++)
t=t+c[i];
m=t+tot;
cout<<"total bill for day:"<<m<<endl;
}
void patient::read()
{
cout<<"Enter details\n";
cout<<"Name:\n";
cin>>name;
cout<<"Age:\n";
cin>>age;
n++;
}
void consultancy()
{
int k;
cout<<"How can we help you :\n\t\t1->cardiologist\n\t\t2->dentist\n\t\t3->gynecologist\n\t\t4->ENT\n\t\t5->orthopedic surgeon\n";
cin>>k;
obj[n].read();
switch(k)
{
case 1: if(no[0]<40)
	{
	cout<<"Amount due : Rs 800.00\n";
	no[0]++;
	}
	else
	cout<<"No apointment avaliable\n";
	break;
case 2:
	if(no[1]<40)
	{
	cout<<"Amount due : Rs 500.00\n";
	no[1]++;
	}
	else
	cout<<"No apointment avaliable\n";
	break;
case 3:
	if(no[2]<40)
	{
	cout<<"Amount due : Rs 700.00\n";
	no[2]++;
	}
	else
	cout<<"No apointment avaliable\n";
	break;
case 4:
	if(no[3]<40)
	{
	cout<<"Amount due : Rs 600.00\n";
	no[3]++;
	}
	else
	cout<<"No apointment avaliable\n";
	break;
case 5:
	if(no[4]<40)
	{
	cout<<"Amount due : Rs 500.00\n";
	no[4]++;
	}
	else
	cout<<"No apointment avaliable\n";
	break;
}
}
void admitp::discharge()
{
cout<<"Enter no.of days stayed :\n";
cin>>x;
switch(f)
{
case 1: if(d[0]<20)
	{
	d[0]++;
	cout<<"Patient has been discharged from dormitary\n";
	billp[0]=x*500;
	cout<<"Bill:"<<billp[0]<<endl;
	c[0]=c[0]+billp[0];
	}
	else
	cout<<"Room not avaliable\n";
	break;
case 2:
	if(d[1]<15)
	{
	cout<<"Patient has been discharged from non-ac standard room\n";
	billp[1]=x*800;
	cout<<"Bill:"<<billp[1]<<endl;
	d[1]++;
	c[1]=c[1]+billp[1];
	}
	else
	cout<<"Room not avaliable\n";
	break;
case 3:
	if(d[2]<10)
	{
	cout<<"Patient has been discharged from non-ac vip room\n";
	billp[2]=x*1000;
	cout<<"Bill:"<<billp[2]<<endl;
	d[2]++;
	c[2]=c[2]+billp[2];
	}
	else
	cout<<"Room not avaliable\n";
	break;
case 4:
	if(d[3]<10)
	{
	cout<<"Patient has been discharged from ac standard room\n";
	billp[3]=x*1500;
	cout<<"Bill:"<<billp[3]<<endl;
	d[3]++;
	c[3]=c[3]+billp[3];
	}
	else
	cout<<"Room not avaliable\n";
	break;
case 5:
	if(d[4]<10)
	{
	cout<<"Patient has been discharged from ac vip room\n";
	billp[4]=x*2000;
	cout<<"Bill:"<<billp[4]<<endl;
	d[4]++;
	c[4]=c[4]+billp[4];
	}
	else
	cout<<"Room not avaliable\n";
	break;
}
da++;
}
void admitp::admit()
{
ad++;
obj[n].read();
cout<<"Room Type\t\t\tRate\n";
cout<<"1->Dormitary\t\t\tRs 500.00\n2->Standarad non-ac rooms\tRs 800.00\n3->Vip non-ac rooms\t\tRs 1000.00\n4->Ac rooms standard\t\tRs 1500.00\n5->Vip ac rooms\t\t\tRs 2000.00\nWhich room do you want :\n";
cin>>f;
switch(f)
{
case 1:
	cout<<"Patient has been admitted in dormitary\n";
	a[0]++;
	break;
case 2:
	cout<<"Patient has been admitted in non-ac standard room\n";
	a[1]++;
	break;
case 3:
	cout<<"Patient has been admitted in non-ac vip room\n";
	a[2]++;
	break;
case 4:
	cout<<"Patient has been admitted in ac standard room\n";
	a[3]++;
	break;
case 5:
	cout<<"Patient has been admitted in ac vip room\n";
	a[4]++;
	break;
}
}
void check()
{
int flag=0;
char named[10];
cout<<"Enter name of the patient to dicharge :\n";
cin>>named;
for(int i=0;i<n;i++)
{
if(strcmp(obj[i].name,named)==0)
{
obj[i].discharge();
flag=1;
}
}
if(flag!=1)
cout<<"Pateint name not found\n";
}
void main()
{
clrscr();
int s;
while(1)
{
cout<<"**************************  Main Menu  **************************\nEnter your choice :\n\t\t  1->consultancy\n\t\t  2->admit\n\t\t  3->discharge\n\t\t  4->exit portal\n";
cin>>s;
while (s < 1 || s > 4)

		{

			cout << "\nInvalid choice, try again:\n";

			cin >>s;

			if (cin.fail())

			{

				cin.clear();

				char c;

				cin >> c;

			}

		}
switch(s)
{
case 1:
	consultancy();
	break;
case 2:
	obj[n].admit();
	break;
case 3:
	check();
	break;
case 4:
	display();
	getch();
	exit(1);
}
}
}