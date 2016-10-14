#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,b[10],j,c;
FILE *fp,*f1;
fp=fopen("binaryfile","wb");
printf("size of an array\n");
scanf("%d",&n);
printf("enter integers\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
fwrite(a,sizeof(int),n,fp);
fclose(fp);
fp=fopen("binaryfile","rb");
fread(b,sizeof(int),n,fp);
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
if(b[i]>b[j])
{
c=b[i];
b[i]=b[j];
b[j]=c;
}
}
}
printf("sorted array\n");
for(i=0;i<n;i++)
printf("%3d",b[i]);
fclose(fp);
getch();
}