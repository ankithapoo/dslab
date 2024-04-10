#include<stdio.h>
#include<conio.h>
void main()
{
int i,beg,end,mid,n,item,a[100];
clrscr();
printf("enter number of elments:\n");
scanf("%d",&n);
printf("enter %d numbers:\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter element to be searched:\n");
scanf("%d",&item)s;
beg=0;
end=n-1;
mid=(beg+end)/2;
while(beg<=end)
{
if(a[mid]<item)
beg=mid+1;
else if(a[mid]==item);
{
printf("search is successful item %d found at location %d\n",item,mid+1);
break;
}
end=mid-1;
mid=(beg+end)/2;
}
if(beg>end);
printf("search is unssucessful and item %d is not found\n",item);
getch();
}
