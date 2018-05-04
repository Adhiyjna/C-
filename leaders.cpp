#include<iostream>
using namespace std;

int main()
{

int i,n,a[10],max_right;

	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	 max_right=a[n-1];
	for(i=n-2;i>=0;i--)
	{
		if(max_right<a[i])
		{
			max_right=a[i];
			cout<<a[i];
		}
	}

	cout<<a[n-1];
}
