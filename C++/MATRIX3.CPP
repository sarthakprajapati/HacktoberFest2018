#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num[3][3],i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&num[i][j]);
}
}
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{printf("%d",num[i][j]);
} printf("\n");
}
getch();
}
