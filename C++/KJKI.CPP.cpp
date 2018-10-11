#include<iostream.h>
#include<stdlib.h>
int main()
{
int del,j,q,i=0,n,ar[20],m;
cout<<"Enter dimension of array : ";
cin>>m;
cout<<"Enter array elements : ";
for(i=0;i<m;i++)
{
cin>>ar[i];
}
XYZ:
cout<<"Enter\t 1. To insert element in the array \n\t 2. To delete element from the array\n\t 3. To reverse the array elements \n\t 4. Exit\n";
cin>>n;
switch(n)
{
case 1:
{
m++;
cout<<"Enter position : ";
cin>>j;
for(i=m;i>=j-1;i--)
{
ar[i+1]=ar[i];
}
cout<<"Enter value of element to insert : ";
cin>>ar[j-1];
cout<<"Array after insertion is : ";
for(i=0;i<m;i++)
{ cout<<ar[i]<<" ";
}
cout<<"\nEnter 0 to exit and 1 to go to menu\n";
cin>>q;
if(q==0)
exit(0);
else
goto XYZ;
break;
}
case 2:
{
cout<<"Enter position to delete : ";
cin>>del;
for(i=del;i<m;i++)
{
ar[i-1]=ar[i];
}
m--;
cout<<"Array after deletion is : ";
for(i=0;i<m;i++)
{
cout<<ar[i]<<" ";
}
cout<<"\nEnter 0 to exit or 1 to menu\n";
cin>>q;
if(q==0)
exit(1);
else
goto XYZ;
break;
}
case 3:
{
int s;
cout<<"Array after reversing is : ";
if(m%2==0)
for(i=1;i<=m/2;i++)
{
s=ar[i-1];
ar[i-1]=ar[m-i];
ar[m-i]=s;
}
else
for(i=0;i<=m/2;i++)
{
s=ar[i-1];
ar[i-1]=ar[m-i];
ar[m-i]=s;
}
for(i=0;i<m;i++)
cout<<ar[i]<<" ";
cout<<"\nEnter 0 to exit and 1 to go to menu\n";
cin>>q;
if(q==0)
exit(2);
else
goto XYZ;
break;
}
case 4:
exit(3);
}
}


