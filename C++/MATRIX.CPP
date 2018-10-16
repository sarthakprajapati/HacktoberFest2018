#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int num[3][3],i,j;
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   scanf("%d",&num[i][j]);
 for(i=0;i<3;i++)
  printf("%d",num[i][j]);
}
