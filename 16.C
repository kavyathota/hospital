#include<stdio.h>
#include<conio.h>
void main()
{
FILE *f1,*f2;
char c;
int n,i;
f1=fopen("data","w");
while((c=getchar())!=EOF)
putc(c,f1);
n=ftell(f1);
fclose(f1);
f1=fopen("data","r");
f2=fopen("data1","w");
fseek(f1,-1,2);
for(i=0;i<n;i++)
{
putc(getc(f1),f2);
fseek(f1,-2,1);
}
fclose(f1);
fclose(f2);
f2=fopen("data1","r");
while((c=getc(f2))!=EOF)
printf("%c",c);
fclose(f2);
getch();
}