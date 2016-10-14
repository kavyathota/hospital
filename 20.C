#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
FILE *fp;
fp=fopen("binaryfile","wb");
printf("enter intergers\n");
for(i=0;i<5;i++)
{
scanf("%d",&n);
fwrite(&n,sizeof(int),1,fp);
}
fclose(fp);
fp=fopen("binaryfile","rb");
while(fread(&n,sizeof(int),1,fp)>0)
printf("%3d",n);
fclose(fp);
getch();
}