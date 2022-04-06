#include<stdio.h>
#include<conio.h>
void main()
{
void input(int [],int);
int maxofarray(int [],int);
int minofarray(int [],int);
int sumofarray(int[],int);
int a[20],i,n,max,min,sum;
clrscr();
printf("enter no.of elements you want:");
scanf("%d",&n);
input(a,n);
max=maxofarray(a,n);
printf("maximum = %d\n",max);
min=minofarray(a,n);
printf("minimum = %d\n",min);
sum=sumofarray(a,n);
printf("sum = %d",sum);
getch();
}
void input(int a[],int n)
{
int i;
printf("enter elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
int maxofarray(int a[],int n)
{
int i,max=a[0];
for(i=0;i<n;i++)
{
if(max<a[i])
max=a[i];
}
return max;
}
int minofarray(int a[],int n)
{
int i,min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
min=a[i];
}
return min;
}
int sumofarray(int a[],int n)
{
int i,sum=0;
for(i=0;i<n;i++)
{
sum+=a[i];
}
return sum;
}

