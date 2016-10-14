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
cout<<"enter details\n";
cout<<"enter name:\n";
cin>>name;
cout<<"enter age:\n";
cin>>age;
n++;
}
void consultancy()
{
int k;
cout<<"whats your problem:\n1.cardiologist\n2.dentist\n3.gynecologist\n4.ENT\n5.orthopedic surgeon\n";
cin>>k;
obj[n].read();
switch(k)
{
case 1: if(no[0]<40)
	{
	cout<<"please pay fee 800\n";
	no[0]++;
	}
	else
	cout<<"no apointment avaliable\n";
	break;
case 2:
	if(no[1]<40)
	{
	cout<<"please pay fee 500\n";
	no[1]++;
	}
	else
	cout<<"no apointment avaliable\n";
	break;
case 3:
	if(no[2]<40)
	{
	cout<<"please pay fee 700\n";
	no[2]++;
	}
	else
	cout<<"no apointment avaliable\n";
	break;
case 4:
	if(no[3]<40)
	{
	cout<<"please pay fee 600\n";
	no[3]++;
	}
	else
	cout<<"no apointment avaliable\n";
	break;
case 5:
	if(no[4]<40)
	{
	cout<<"please pay fee 500\n";
	no[4]++;
	}
	else
	cout<<"no apointment avaliable\n";
	break;
}
}
void admitp::discharge()
{
cout<<"enter name of the patient to dicharge\n";
cin>>name;
cout<<"enter no.of days stayed";
cin>>x;
int h;
cout<<"rooms\n";
cout<<"1.dormitary\n2.standarad non-ac rooms\n3.vip non-ac rooms\n4.ac rooms standard\n5.vip ac rooms\nwhich room did you eixt from\n";
cin>>h;
switch(h)
{
case 1: if(d[0]<20)
	{
	d[0]++;
	cout<<"patient has been discharged from dormitary\n";
	billp[0]=x*500;
	cout<<"bill:"<<billp[0]<<endl;
	c[0]=c[0]+billp[0];
	}
	else
	cout<<"room not avaliable\n";
	break;
case 2:
	if(d[1]<15)
	{
	cout<<"patient has been discharged from non-ac standard room\n";
	billp[1]=x*800;
	cout<<"bill:"<<billp[1]<<endl;
	d[1]++;
	c[1]=c[1]+billp[1];
	}
	else
	cout<<"room not avaliable\n";
	break;
case 3:
	if(d[2]<10)
	{
	cout<<"patient has been discharged from non-ac vip room\n";
	billp[2]=x*1000;
	cout<<"bill:"<<billp[2]<<endl;
	d[2]++;
	c[2]=c[2]+billp[2];
	}
	else
	cout<<"room not avaliable\n";
	break;
case 4:
	if(d[3]<10)
	{
	cout<<"patient has been discharged from ac standard room\n";
	billp[3]=x*1500;
	cout<<"bill:"<<billp[3]<<endl;
	d[3]++;
	c[3]=c[3]+billp[3];
	}
	else
	cout<<"room not avaliable\n";
	break;
case 5:
	if(d[4]<10)
	{
	cout<<"patient has been discharged from ac vip room\n";
	billp[4]=x*2000;
	cout<<"bill:"<<billp[4]<<endl;
	d[4]++;
	c[4]=c[4]+billp[4];
	}
	else
	cout<<"room not avaliable\n";
	break;
}
da++;
}
void admitp::admit()
{
ad++;
obj[ad+n].read();
cout<<"rooms\t\t\t\trate\n";
cout<<"1.dormitary\t\t\t500\n2.standarad non-ac rooms\t800\n3.vip non-ac rooms\t\t1000\n4.ac rooms standard\t\t1500\n5.vip ac rooms\t\t\t2000\nwhich room do you want\n";
cin>>f;
switch(f)
{
case 1:
	cout<<"patient has been admitted in dormitary\n";
	a[0]++;
	break;
case 2:
	cout<<"patient has been admitted in non-ac standard room\n";
	a[1]++;
	break;
case 3:
	cout<<"patient has been admitted in non-ac vip room\n";
	a[2]++;
	break;
case 4:
	cout<<"patient has been admitted in ac standard room\n";
	a[3]++;
	break;
case 5:
	cout<<"patient has been admitted in ac vip room\n";
	a[4]++;
	break;
}
}
void main()
{
clrscr();
int s;
while(1)
{
cout<<"enter ur choice\n1.consultancy\n2.admit\n3.discharge\n4.exit portal\n";
cin>>s;
	
while (s < 1 || s > 4)
		{
			cout << "\nInvalid choice, try again:\n";
			cin >> s;
			// not a numeric character, probably
			// clear the failure and pull off the non-numeric character
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
	obj[n+ad+1].admit();
	break;
case 3:
	obj[n+da].discharge();

	break;
case 4:
	display();
	getch();
	exit(1);
}
}
}
