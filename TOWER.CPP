#include<stdio.h>
#include<conio.h>
void towerofhani0(int n,char from_rod,char to_rod,char aux_rod)
{
if(n==1)
{
printf("\nmore disk %d c to rod %c",n,from_rod,to_rod);
return;
}
towerofhani0(n-1,from_rod,aux_rod,to_rod);
printf("\n more disk%d from rod %c torod%c",n,from_rod,to_rod);
towerofhani0(n-1,aux_rod,to_rod,from_rod);
}
int main()
{
int n=3;
clrscr();
towerofhani0(n,'A','C','B');
getch();
return 0;
}