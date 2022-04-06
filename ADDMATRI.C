#include<stdio.h>
#include<conio.h>
void main()
{
void input(int [10][10],int,int);
void output(int [10][10],int,int);
void add(int [10][10],int [10][10],int [10][10],int,int);
int a[10][10],b[10][10],s[10][10],r,c;
clrscr();
printf("enter no of row and no of column ");
scanf("%d%d",&r,&c);
input(a,r,c);
input(b,r,c);
printf("sum :\n");
add(s,a,b,r,c);
printf("first matrix:\n");
output(a,r,c);
printf("second matrix:\n");
output(b,r,c);
printf("sum of both matrix:\n");
output(s,r,c);
getch();
}
void input(int a[10][10],int r,int c)
{
int i,j;
printf("enter elements of matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
}
void output(int a[10][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
}
void add(int s[10][10],int a[10][10],int b[10][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
s[i][j]=a[i][j]+b[i][j];
}
}
}