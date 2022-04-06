#include<stdio.h>
#include"my.c"
#include<conio.h>
int a;
extern ex;
void main()
{
void f1();
register r;
clrscr();
a=5;
f1();
f1();
f1();
f1();
printf("\nvalue of local var=%d",a);
printf("\nvalue of external var=%d",ex);
printf("\nvalue of register var=%d",r);
getch();
}
void f1()
{
static int a=7;
auto int b=5;
printf("\n%d\t%d",a,b);
a++;
b++;
}