#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c,n,count=0;
clrscr();
printf("enter a value:\n");
scanf("%d",&n);
printf("first%d faboncci number\n",n);
printf("%d\t%\t",a,b);
count=2;
while(count<n)
{
c=a+b;
count++;
printf("%d\t",c);
a=b;
b=c;
}
getch();
}