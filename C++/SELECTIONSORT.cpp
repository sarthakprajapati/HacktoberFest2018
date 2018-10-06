#include <iostream>
using namespace std;

int main() {
	int arr[15],n=10,temp;
	for(int i = 0;i<n;i++)
	cin>>arr[i];
	for(int j = 0;j<n-1;j++)
	{
	    int minimum = j;
	    for(int k = j+1;k<n;k++)
	    {
	        if(arr[k]<arr[minimum])
	        {
	            temp = arr[k];
	            arr[k] = arr[minimum];
	            arr[minimum] = temp;
	        }
	    }
	}
	for(int i = 0;i<n;i++)
	cout<<"\t"<<arr[i];
}
