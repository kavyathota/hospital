#include<stdio.h>
#include<conio.h>
void main()
{
int *p,n,i;
printf("enter size\n");
scanf("%d",&n);
p=(int*)malloc(n,sizeof(int));
printf("enter elements\n");
for(i=0;i<n;i++)
scanf("%d",p+i);
printf("elements are\n");
for(i=0;i<n;i++)
printf("%d\n",*(p+i));
getch();
}