#include<iostream>
using namespace std;

int main()
{
int n,temp,i,j;
int arr[10];

	cout<<"enter the no of elements";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];	
	}
	i=0;
	j=n-1;
	
	while(i<j)
	{
	        temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
return 0;
}
