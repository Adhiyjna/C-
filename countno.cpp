//count no of occurences of an element using linear search

#include<iostream>
using namespace std;

int main()
{

int i,x,n,a[10];
int res=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<<"element whose occurences to be found";
	cin>>x;

	for(i=0;i<n;i++)
	{
		if(a[i]==x)
			res++;
	}

	cout<<res;
}
