#include<iostream>
using namespace std;

int main()
{
	int i,n,x,a[10];	
	
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	
	x=a[0];

	for(i=0;i<n;i++)
		a[i]=a[i+1];

	a[n-1]=x;
	

	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}

}
