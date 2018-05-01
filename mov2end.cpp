#include<iostream>
using namespace std;

int main()
{
int n,i=0,k=0,arr[10];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	
	for(i=0;i<n;i++)
	{
		if(arr[i]==1)
			{
			k++;
			}
	}
	
	for(i=0;i<k;i++)
	{
		arr[i]=1;
	}
	for(i=k;k<n;k++)
	{
		arr[k]=0;
	}
		
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
}
