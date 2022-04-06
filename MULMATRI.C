#include<stdio.h>
#include<conio.h>
void main()
{
void input(int [10][10],int,int);
void output(int [10][10],int,int);
void multiply(int [10][10],int [10][10],int[10][10],int,int,int);
int a[10][10],b[10][10],m[10][10],r1,c1,r2,c2;
clrscr();
printf("enter no.of rows and column of first matrix: ");
scanf("%d%d",&r1,&c1);
input(a,r1,c1);
printf("enter no. of rows and column of second matrix: ");
scanf("%d%d",&r2,&c2);
input(b,r2,c2);
if(c1==r2)
{
multiply(m,a,b,r1,c1,c2);
printf("multiplication of matrices:\n");
output(m,r1,c2);
}
else
{
printf("multiplication not possible");
}
getch();
}
void input(int a[10][10],int r,int c)
{
int i,j;
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
void multiply(int m[10][10],int a[10][10],int b[10][10],int r1,int c,int c2)
{
int i,j,k;
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
m[i][j]=0;
for(k=0;k<c;k++)
{
m[i][j]+=a[i][k]*b[k][j];
}
}
}
}



