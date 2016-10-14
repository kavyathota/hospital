#include<stdio.h>
#include<conio.h>
struct student
{
int rno;
int m[6];
char name[10];
}s[5];
void main()
{
FILE *fp;
int i,j,n,sum;
float p;
clrscr();
printf("enter no. of students\n");
scanf("%d",&n);
fp=fopen("data","w");
for(i=0;i<n;i++)
{
printf("enter student %d details\n",i+1);
printf("enter name and rollno.\n");
scanf("%s%d",s[i].name,&s[i].rno);
fprintf(fp,"%s %d",s[i].name,s[i].rno);
printf("enter marks\n");
sum=0;
for(j=0;j<6;j++)
{
scanf("%d",&s[i].m[j]);
sum=sum+s[i].m[j];
fprintf(fp,"%d",&s[i].m[j]);
}
printf(" %d ",sum);
p=(float)(sum/6);
fprintf(fp,"%d%f",sum,p);
}
fclose(fp);
fp=fopen("data","r");
printf("name\trollno.\tmarks\tsum\tpercentage\n");
for(i=0;i<n;i++)
{
fscanf(fp,"%d%s",s[i].name,&s[i].rno);
printf("%s  %d",s[i].name,s[i].rno);
for(j=0;j<6;j++)
{
fscanf(fp,"%d",&s[i].m[j]);
printf(" %d ",s[i].m[j]);
}
fscanf(fp,"%d%f",&sum,&p);
printf("%d\t%f\n",sum,p);
}
fclose(fp);
getch();
}