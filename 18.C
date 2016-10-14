#include<stdio.h>
#include<conio.h>
void main()
{
FILE *f1,*f2,*fp;
char c;
int i;
clrscr();
f1=fopen("file1","w");
f2=fopen("file2","w");
printf("enter file contents\n");
printf("press -1 to stop\n");
for(i=0;i<100;i++)
{
c=getchar();
if(c=='#')
break;
putc(c,f1);
}
printf("enter file 2 contrnts\n");
printf("press -1 to stop\n");
for(i=0;i<100;i++)
{
c=getchar();
if(c=='#')
break;
putc(c,f2);
}
fclose(f1);
fclose(f2);
f1=fopen("file1","r");
fp=fopen("merge","w");
while((c=getc(f1))!=EOF)
putc(c,fp);
fclose(f1);
fclose(fp);
f2=fopen("file2","r");
fp=fopen("merge","a");
while((c=getc(f2))!=EOF)
putc(c,fp);
fclose(f2);
fclose(fp);
fp=fopen("merge","r");
while((c=getc(fp))!=EOF)
printf("%c",c);
fclose(fp);
getch();
}