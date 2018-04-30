#include<iostream>
using namespace std;

int main()
{
int n,temp,i,j,k;
int arr[10],arr1[10];

	cout<<"enter the no of elements";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];	
	}
	cout<<"original no"<<endl;
	
	for(i=0;i<n;i++)
	{
	cout<<arr[i];
	}
	i=0;
	j=n-1;
	k=0;
	for(i=0;i<n;i++)
	{
	      if(arr[i]!=arr[n-i])
		{
			cout<<"not palinrome";
			break;
		}
	      else
		{
			cout<<"plaindrome";
		}
	}
	
	
	
return 0;
}
