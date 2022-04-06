#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],*p,*q,s,d;
clrscr();
p=&a[0];
q=&a[6];
d=q-p;
//p+q,p*q,p/q(not possible)
printf("p=%d\n",p);
printf("q=%d\n",q);
printf("difference of pointer=%d\n",d);
p=p+3;
printf("new value of p=%d\n",p);
q=q-2;
printf("new value of q=%d\n",q);
//p=p*5,p=p/5(not possible)
getch();
}



