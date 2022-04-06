#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[10][20],temp[20];
int i,j,pass;
clrscr();
for(i=0;i<10;i++)
{
gets(s[i]);
}
for(pass=1;pass<10;pass++)
{
for(j=0;j<10-pass;j++)
{
if(strcmp(s[j],s[j+1])>0)
{
strcpy(temp,s[j]);
strcpy(s[j],s[j+1]);
strcpy(s[j+1],temp);
}
}
}
for(i=0;i<10;i++)
{
puts(s[i]);
}
getch();
}