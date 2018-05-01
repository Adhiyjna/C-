#include<iostream>
using namespace std;

int main()
{int n;

	int a[10],d[10],c[10];
	int i,x=0,y=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		c[x]=a[i];
		x++;	
		}

		else
		{
		d[y]=a[i];
		y++;
		}
	}
	
	for(i=0;i<x;i++)
	{
		cout<<c[i];
	}

	for(i=0;i<y;i++)
	{
		cout<<d[i];
	}

}
