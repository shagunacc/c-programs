#include<stdio.h>
#include<conio.h>
typedef struct complex{
int r;
int i;
}com;
void main()
{
struct complex c1,c2,c3;
void inputcomplex(com *);
void outputcomplex(com *);
void addcomplex(com *c,com *a,com *b);
clrscr();
inputcomplex(&c1);
inputcomplex(&c2);
addcomplex(&c3,&c1,&c2);
outputcomplex(&c3);
getch();
}
void inputcomplex(com *a)
{
printf("enter real part ");
scanf("%d",&a->r);
printf("\n enter imaginary part");
scanf("%d",&a->i);
}
void outputcomplex(com *a)
{
printf("\n %d +i%d",a->r,a->i);
}
void addcomplex(com *c,com *a,com *b)
{
c->r=a->r+b->r;
c->i=a->i+b->i;
}


