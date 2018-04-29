#include<iostream>
using namespace std;

int main()
{
int i,j,r1,r2,c1,c2;
int a[10][10],b[10][10],c[10][10];
	cout<<"rows of mat1";
	cin>>r1;
	cout<<"col of mat1";
	cin>>c1;
	cout<<"rows of mat2";
	cin>>r2;
	cout<<"col of mat2";
	cin>>c2;

	//printing matrix 1
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cin>>a[i][j];
		}
	cout<<endl;
	}
	//displaying matrix 1
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<a[i][j];
		}
	cout<<endl;
	}

	//printing matrix 2
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cin>>b[i][j];
		}
	cout<<endl;
	}
	//displaying matrix 2
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<b[i][j];
		}
	cout<<endl;
	}

	//initializing all vlues to zero
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=0;
		}
	}

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]+=a[i][j]+b[i][j];
		}
	}

	for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				cout<<c[i][j];
			}
		cout<<endl;
		}


	
}
