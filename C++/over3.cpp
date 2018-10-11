#include<iostream>
using namespace std;
class num
{
int a;
public:
void get()
{
cin>>a;
}
void display()
{
cout<<"a = "<<a;
}
void operator --()
{
a=--a;
}
};
int main()
{
num M;
M.get();
--M;
M.display();
}
