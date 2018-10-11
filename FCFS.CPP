#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int b[10],s[10],w[10],x[10],i;
float count=0.0, sum=0.0,awt,att,n;
s[0]=0;
cout<<"enter number of processes";
cin>>n;
cout<<"enter burst time of "<<n<<" processes ";
for( i=0;i<n;i++)
{
cin>>b[i];
}
for( i=0;i<n;i++)
{
 s[i+1]=b[i]+s[i];
}
for(i=0;i<n;i++)
{
 w[i]=s[i];
}
for( i=0;i<n;i++)
{
 x[i]=s[i+1];
}
for( i=0;i<n;i++)
{
 count+=w[i];
}
for( i=0;i<n;i++)
{
 sum+=x[i];
}
awt=float(count/n);
att=float(sum/n);
cout<<"average waiting time is: "<<awt;
cout<<"\naverage turn around time is: "<<att;
getch();
}