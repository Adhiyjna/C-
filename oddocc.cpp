#include<iostream>
using namespace std;

int main()
{

int i,n,arr[10],res=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for(i=0;i<n;i++)
	{
		 res=res^arr[i];
	}
	
	cout<<res;

}
