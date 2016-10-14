#include<stdio.h>
float fact(float);
float ncr(float,float);
void main()
{
float n,r,i;
float sum=0;
scanf("%f%f",&n,&r);
for(i=0;i<=r;i=i+2)
{
sum=sum+ncr(n,i);
}
printf("%f",sum);
}
float ncr(float n,float r)
{
float y;
y=(float)fact(n)/(fact(r)*fact(n-r));
return y;
}
float fact(float n)
{
float x=1;
while(n!=0)
{
x=x*n;
n=n-1;
}
return x;
}