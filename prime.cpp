#include<iostream>
using namespace std;

int main()
{
int i,n;
	cin>>n;
	int flag=0;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
			{
				flag=1;
				break;
			}
	}

	if(flag==0)
		cout<<"prime";
	else
		cout<<"not prime";

}
