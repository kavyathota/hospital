#define size 20
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
char s[size];
int top=-1,i=0,k=0;
void push(char);
char pop();
int pr(char);
char infx[50],pofx[50],ch,e;
void main()
{
clrscr();
printf("enter infix expression\n");
scanf("%s",infx);
while((ch=infx[i++])!='\0')
{
if(ch=='(')
push(ch);
else if(isalnum(ch))
pofx[k++]=ch;
else if(ch==')')
{
while(s[top]!='(')
pofx[k++]=pop();
e=pop();
printf("%c",e);
}
else
{
if(pr(s[top]>=pr(ch)))
pofx[k++]=pop();
push(ch);
}
}
while(top!=-1)
pofx[k++]=pop();
pofx[k]='\0';
printf("\n\ngiven infix expression is : %s\npost fixexpression is : %s\n",infx,pofx);
getch();
}
void push(char elem)
{
s[++top]=elem;
}
char pop()
{
return(s[top--]);
}
int pr(char elem)
{
switch(elem)
{
case '#':
	return 0;
case '(':
	return 1;
case '+':
case '-':
	return 2;
case '*':
case '/':
	return 3;
case '^':
	return 4;
}
return 0;
}