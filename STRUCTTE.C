#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct student{
char name[20];
int age;
int marks;
int sem;
}stu;
void main()
{
stu s[10];
int i,max,index,sum=0;
clrscr();
for(i=0;i<10;i++)
{
printf("enter name  ");
gets(s[i].name);
printf("enter age  ");
scanf("%d",&s[i].age);
printf("enter marks  ");
scanf("%d",&s[i].marks);
printf("enter semester  ");
scanf("%d",&s[i].sem);
fflush(stdin);
}
for(i=0;i<10;i++)
{
printf("\n%s\t%d\t%d\t%d",s[i].name,s[i].age,s[i].marks,s[i].sem);
}
for(i=0;i<10;i++)
{
max=s[0].marks;
index=0;
if(max<s[i].marks)
{
max=s[i].marks;
index=i;
}
}
printf("\nstudent with highest marks is %s",s[index].name);
for(i=0;i<10;i++)
{
sum+=s[i].marks;
}
printf("\ntotal marks of all students = %d",sum);
getch();
}