#include<iostream>
using namespace std;

int main()
{
	
	int i,n,arr[10];
	cout<<"enter the no of elements";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<=n;i++)
		{
		 cout<<arr[i];
		}

	int max_diff=arr[1]-arr[0];
	int min_ele=arr[0];

	for(i=1;i<n;i++)
	{
		if(arr[i]-min_ele>max_diff)
			max_diff=arr[i]-min_ele;
		
		if(arr[i]<min_ele)
			min_ele=arr[i];			
	
	}

		cout<<max_diff;


}
