#include<iostream>
using namespace std;

int main()
{
int i,n,arr[10],count[10];
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for(i=0;i<n;i++)
	{
		if(count[arr[i]]==1)
			cout<<"duplicate element"<<arr[i];
		else
			count[arr[i]]++;
	}

	return 0;
}
