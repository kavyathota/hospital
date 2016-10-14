#include<stdio.h>
#include<conio.h>
void main()
{
FILE *f1,*f2,*f3;
char c;
f1=fopen("input","w");
while((c=getchar())!=EOF)
putc(c,f1);
fclose(f1);
f1=fopen("input","r");
f2=fopen("vovels","w");
f3=fopen("consonants","w");
while((c=getc(f1))!=EOF)
{
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
putc(c,f2);
else
putc(c,f3);
}
fclose(f1);
fclose(f2);
fclose(f3);
f2=fopen("vovels","r");
f3=fopen("consonanta","r");
printf("vovels\n");
while((c=getc(f2))!=EOF)
printf("%c",c);
printf("consonants\n");
while((c=getc(f3))!=EOF)
printf("%c",c);
fclose(f2);
fclose(f3);
getch();
}