#include<stdio.h>
#include<conio.h>
void main()
{
int arr[20],i,j,min,n,temp;
clrscr();
printf("enter the number of elements:\n");
scanf("%d",&n);
printf("the elements are:\n");
for(i=0; i<n; i++)
{
 scanf("%d",&arr[i]);
  }
 for(i=0; i<n-1;i++)
 {
   min=i;
   for(j=i+1; j<n;j++)
   {
   if(arr[min]>arr[j])
   min=j;
   }
   if(min!=i)
   {
   temp=arr[i];
   arr[i]=arr[min];
   arr[min]=temp;
   }
   }
printf("the sorted array in ascending order:\n");
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
printf("\n");
getch();
}