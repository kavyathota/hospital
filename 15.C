#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
FILE *fp,*f1;
char c,s[10];
int i;
clrscr();
f1=fopen("real","w");
for(i=0;i<argc;i++)
fprintf(f1,"%s ",argv[i]);
fclose(f1);
f1=fopen("real","r");
fp=fopen("copy","w");
for(i=0;i<argc;i++)
{
fscanf(f1,"%s",s);
fprintf(fp,"%s ",s);
}
fclose(f1);
fclose(fp);
fp=fopen("copy","r");
for(i=0;i<argc;i++)
{
fscanf(fp,"%s",s);
printf(" %s ",s);
}
fclose(fp);
getch();
}