#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,flag=0;
clrscr();
printf("enter the number to check whether the number is prime or not");
scanf("%d",&n);
if(n==0||n==1)
flag=1;
for(i=2;1<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("n%d numbers is not prime",n);
else
printf("%d number is prime \n",n);
getch();
}