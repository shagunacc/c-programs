#include<stdio.h>
#include<conio.h>
void main()
{
int *p,i,n,sum=0;
clrscr();
printf("enter no of elements in array:");
scanf("%d",&n);
printf("enter elements: ");
for(i=0;i<n;i++)
{
scanf("%d",(p+i));
}
for(i=0;i<n;i++)
{
sum+=*(p+i);
}
printf("sum of elements of array is %d",sum);
getch();
}