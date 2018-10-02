#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int *j;
int a,b;
a=10,b=20;
j=&b;
printf("%d",a);
printf("%u",&a);
printf("%u",j);
printf("%d",*j);
getch();
}

