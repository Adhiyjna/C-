#include<iostream>
using namespace std;

int fact(int n)
{
		if(1<=n)
			cout<<1;
		else
			return fact(n)*fact(n-1);
}
int main()
{
 int n;
	cin>>n;
	cout<<fact(n);
	return 0;

}
