#include<stdio.h>
#include<conio.h>
enum week
{
mon=1,
tue,
wed,
thur,
fri,
sat,
sun
};
void main()
{
int day;
clrscr();
printf("enter day");
scanf("%d",&day);
if(day==mon)
{
printf("it is a bad day");
}
else if(day==tue||day==wed||day==thur)
{
printf("it is tiring day");
}
else if(day==fri)
{
printf("it is a happy day");
}
else if(day==sat||day==sun)
{
printf("weekend are best");
}
getch();
}