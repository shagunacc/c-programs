#include<stdio.h>
#include<conio.h>
void main()
{
void swap(int *,int *);
int x,y;
x=4;
y=7;
clrscr();
printf("x=%d,y=%d",x,y);
swap(&x,&y);
printf("\nafter swapping x=%d,y=%d",x,y);
getch();
}
void swap(int *x,int *y)
{
int z;
z=*x;
*x=*y;
*y=z;
}