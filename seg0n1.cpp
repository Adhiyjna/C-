#include<iostream>
using namespace std;

int main()
{
int i,n,arr[10];
	int cnt=0;
	cout<<"enter the total numbers";
	cin>>n;
	cout<<"the numbers are";
	for(i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
			{
				cnt++;
			}
	}

	for(i=0;i<cnt;i++)
	{
		arr[i]=0;
	}
	
	for(i=cnt;i<n;i++)
	{
		arr[i]=1;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}

}

