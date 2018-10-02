#include<stdio.h>
#include<conio.h>
void TOH(int n,char beg, char aux, char end)
{
	if(n>=1)
	{
		TOH(n-1,beg,end,aux);
		printf("%c to %c\n",beg,end);
		TOH(n-1,aux,beg,end);
	}
}
int main()
{
	int n;
	printf("Enter the number of disks");
	scanf("%d",&n);
	TOH(n,'A','B','C');
	getch();
	return 0;
}
