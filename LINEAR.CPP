#include<stdio.h>
#include<conio.h>
void main()
{
int n,search,i,a[50],pos;
clrscr();
printf("enter the number of elements:\n");
scanf("%d",&n);
printf("the elements are:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the search element:");
scanf("%d",&search);
pos=-1;
for(i=0;i<n;i++)
{
if(search==a[i]);
{
pos=i;
break;
}
}
if(pos>=0)
{
printf(" the searching element is found %d, element is found at location %d:\n",search,pos+1);
}
else
{
printf(" the searching element is not found\n",search);
}
getch();
}