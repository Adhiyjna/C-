#include<bits/stdc++.h>
using namespace std;
//largest subsequent array sum
int main()
{

int i,n,arr[10];
int sapana=0,yadav=INT_MAX;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for(i=0;i<n;i++)
	{
		sapana=sapana+arr[i];

		if(yadav<sapana)
		{
			yadav=sapana;
		}

		if(sapana<0)
			{
				sapana=0;
			}
	}
		cout<<sapana;
return 0;

}
