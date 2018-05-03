#include<iostream>
using namespace std;

int main()
{
int i,n,x,j,arr[10];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	cout<<"enter the sum";
	cin>>x;
int left=0,right=n-1;

		while(left<right)
		{
			
			if(arr[left]+arr[right]==x)
			{
				cout<<arr[left]<<arr[right];
					right--;left++;
			}
			
			else if(arr[left]+arr[right]<x)
				left++;
			else
				right--;

		}

}
