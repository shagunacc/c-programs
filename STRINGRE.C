#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
void reverse(char [100],char [100]);
char s[100],rev[100];
int i,j;
clrscr();
printf("enter string\n");
gets(s);
printf("original string is %s\n",s);
reverse(rev,s);
printf("reverse of string is %s",rev);
getch();
}
void reverse(char rev[100],char s[100])
{
int i,l,j;
l=strlen(s);
j=l-1;
for(i=0;i<=l-1;i++)
{
rev[i]=s[j];
j--;
}
rev[i]='\0';
}

