#include<iostream>
using namespace std;

int main()
{
int i,n,a[10],j,k;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}


	for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
					{
					for(k=j;k<=n-1;k++)
					{					
					a[k]=a[k+1];
					n--;
					}
					}
				else
					{
					j++;
					}
			}	
		}

	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
	return 0;
}
