#include<iostream>
using namespace std;

int main()
{
int a[10];
int i,n;
	cin>>n;

	for(i=0;i<n;i++)
		cin>>a[i];

	int x=a[n-1];

	for(i=n-1;i>0;i--)
		a[i]=a[i-1];
	
	a[0]=x;
	
	

	for(i=0;i<n;i++)
		cout<<a[i];

}
