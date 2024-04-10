#include<stdio.h>
#include<conio.h>
void main();
{
int a[10],n,i,j,temp;
clrscr();
printf("enter the number of elements");
scanf("%d",&n);
printf("the elements are:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
merge sort(a,o,n-1);
printf("the sorted elements are:");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
printf("\n");
getch()
}
void merge(int a[],int big,int mid,int end)
{
int i,j,k
int n1=mid-big+1
    n2=end-mid
int lefta[n1],right a[n2]
for(i=0;i<n1;i++)
{
left a[i]=a[beg+i]
}
for(j=0;j<n2;j++)
{
right a[j]=a[mid+1+j)
}
i=0,j=0,k=beg
while(i<n1&&j<n2)
{
if left a[i]<=right a[j]
{
a[k]=left a[i]
i++;
}
else
{
a[k]=right array[j];
j++;
}
k++
}
while(i<n1)
{
a[k]=left a[i];
i++;
k++;
}
while(j<n2)
{
a[k]=right a[j];
j++;
k++;
}}
void merge sort (int a[],int beg,int end)
{
if(beg<end)
{
int mid=(beg+end)/2;
}
merge sort (a,big,mid);
merge sort(a,mid+I,end);
merge sort(a,beg,mid,end);
}