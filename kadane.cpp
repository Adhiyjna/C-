#include<iostream>
#include<climits>
using namespace std;

int main()
{

int a[10],n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int max_m=0;
	int max_t=INT_MIN;

	for(i=0;i<n;i++)
	{
		max_m=max_m+a[i];
	
		if(max_t<max_m)
			max_t=max_m;
		if(max_m<0)
			max_m=0;
	}

	cout<<max_t;
}
