#include<iostream>
using namespace std;

int main()
{
int i,n,a[10];
	cin>>n;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}


	int max_right=a[n-1];

	for(i=n-2;i>=0;i--)
	{
		if(max_right>a[i])
			a[i]=max_right;
		else
			max_right=a[i];
	}

	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}

}
