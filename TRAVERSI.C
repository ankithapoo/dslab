#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i;
clrscr();
printf("enter the number of elements:\n ",n);
scanf("%d",&n);
printf("the elements of an array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf(" the elements of an array:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
printf("\n");
}
getch();
}
