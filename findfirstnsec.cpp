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
	
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
			
	}

	cout<<max<<a[n-1]<<endl;

	

	for(i=0;i<n;i++)
	{

		int t=max;
		max=a[n-1];
		a[n-1]=t;

		cout<<a[i];
	}

	

}

