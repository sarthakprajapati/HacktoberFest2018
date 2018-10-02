/*Stack implementaion*/
#include<iostream>
#include<conio.h>
// It is defining the size of the stack;
#define capacity 10

using namespace std;


class stack
{
private:
int top;  //it is defining the top of the stack;
int array[capacity];
public:
stack()         // constructor has been made to initialize the value of top and it is set to -1;
{
top=-1;
}


void push() // push is used to insert the element in the stack;
{
int number;
cout<<"Enter the element which you want to push\n";
cin>>number;
if(top==capacity-1)
 {
 cout<<"Stack is full\n";
 }
else
 {
 top++;
 array[top]=number;
 }
}


void pop()     // to remove the last element from the stack;
{
int popped;
 if(top==-1)
 {
 cout<<"Stack is empty";
 }
 else
 {
 popped=array[top];
 top--;
 cout<<"Popped Element is:"<<popped;
 }
}


void peek()
{
int peeped;
if(top==-1)
{
cout<<"Stack is empty";
}

else
{
peeped=array[top];
cout<<"Element is:"<<peeped;
}
}


void choice()
{
int k;
while(1)
{
system("cls");
cout<<"1.push\n2.pop\n3.peek the element\n4.exit\n";
cout<<"Enter your choice\n";
cin>>k;
switch(k)
{
case 1:
push();
getch();
break;
case 2:
pop();
getch();
break;
case 3:
peek();
getch();
break;
case 4:
exit(0);
break;
default:
cout<<"Wrong choice\n";
}
}
}
};


int main()
{
stack s1;
s1.choice();
getch();
return 0;
}
