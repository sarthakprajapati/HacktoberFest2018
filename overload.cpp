#include<iostream>
using namespace std;
class num
{
int a;
public:
void get()
{
cout<<"Enter number : ";
cin>>a;
}
void display()
{
cout<<"Number after overloading = "<<a;
}
void operator -()
{
a=-a;
}
};
int main()
{
num M;
M.get();
-M;
M.display();
}
