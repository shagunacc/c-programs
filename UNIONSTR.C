#include<stdio.h>
#include<conio.h>
struct date{
int dd;
int mm;
int yy;
};
union ndate{
int dd;
int mm;
int yy;
};
void main()
{
struct date d1;
union ndate d2;
d1.dd=3;
d1.mm=10;
d1.yy=2000;
d2.dd=3;
d2.mm=10;
d2.yy=2000;
clrscr();
printf("%d\n",sizeof(d1)); //size of structure containing 3 int variables
printf("%d\n",sizeof(d2)); //size of union containing 3 int variables
printf("%d/%d/%d\n",d1.dd,d1.mm,d1.yy);/* for structure- here memory allocation is different for all 3 variables therefore on printing we got all the corresponding values as assigned */
printf("%d/%d/%d",d2.dd,d2.mm,d2.yy);/* for union- here memory created is single therefore on printing we got only the last value assigned for all 3 variables*/
getch();
}