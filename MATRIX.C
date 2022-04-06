#include<stdio.h>
#include<conio.h>
void main()
{
void input(int [10][10],int,int);
void output(int [10][10],int,int);
void add(int [10][10],int [10][10],int [10][10],int,int);
void subtract(int [10][10],int [10][10],int [10][10],int ,int);
void transpose(int [10][10],int [10][10],int,int);
int a[10][10],b[10][10],r,c,s[10][10],d[10][10],t[10][10];
clrscr();
printf("enter no of row and no of column \n note:no of rows and columns should be equal to transpose the matrix");
scanf("%d%d",&r,&c);
input(a,r,c);
input(b,r,c);
printf("sum :\n");
add(s,a,b,r,c);
output(s,r,c);
printf("difference :\n");
subtract(d,a,b,r,c);
output(d,r,c);
if(r==c)
{
printf("transpose of first :\n");
transpose(t,a,r,c);
output(t,r,c);
printf("transpose of second :\n");
transpose(t,b,r,c);
output(t,r,c);
}
else
{
printf("transpose not possible ");
}
getch();
}
void input(int a[10][10],int r,int c)
{
int i,j;
printf("enter elements of matrix:");
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
void subtract(int d[10][10],int a[10][10],int b[10][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
d[i][j]=a[i][j]-b[i][j];
}
}
}
void transpose(int t[10][10],int a[10][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
t[j][i]=a[i][j];
}
}
}



