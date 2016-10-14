#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
int i,a[10],n;
char fname[10];
clrscr();
fp=fopen("data","w");
printf("enter no.s\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
fprintf(fp,"%d ",a[i]);
}
fclose(fp);
fp=fopen("data","r");
for(i=0;i<15;i++)
{
fscanf(fp,"%d",&n);
if(feof(fp))
printf(" end of file ");
else
printf("%4d",n);
}
fclose(fp);
getch();
}