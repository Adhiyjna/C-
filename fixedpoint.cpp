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

	for(i=0;i<n;i++)
	{
		if(a[i]==i)
			cout<<i;
		else
			return -1;
	}

}
