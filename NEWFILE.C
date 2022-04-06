#include<stdio.h>
#include<conio.h>
struct student{
int no;
int marks;
};
void main()
{
struct student s[2];
int i;
FILE *fp;
clrscr();
fp=fopen("student.txt","w");
for(i=0;i<2;i++)
{
printf("enter details of %d student",i+1);
printf("rollno:");
scanf("%d",&s[i].no);
printf("marks:");
scanf("%d",&s[i].marks);
fwrite(&s[i],sizeof(s[i]),1,fp);
}
fclose(fp);
fp=fopen("student.txt","r");
for(i=0;i<2;i++)
{
printf("details of %d student are:",i+1);
fread(&s[i],sizeof(s[i]),1,fp);
printf("rollno = %d",s[i].no);
printf("marks = %d",s[i].marks);
}
fclose(fp);
getch();
}