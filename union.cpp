 #include<iostream>
using namespace std;

void unionofarray(int a[],int b[], int m ,int n)
{
 int i=0,j=0;
    cout<<"\n\nUnion Of Array\n\n";
    
 while(i<m && j<n)
    {
        if(a[i]<b[j])
      cout<<a[i++]<<" ";
     else if(a[i]>b[j])
      cout<<b[j++]<<" " ;
     else
     {
       cout<<a[i++]<<" ";
       j++;
     }  
    }
   while(i<m)
    cout<<a[i++]<<" ";
   while(j<n)
    cout<<b[j++]<<" ";
}


int main()
{
  int m,i,j,n,a[100],b[100];
  
  cout<<"Enter The Size Of First Array \n";
  cin>>m;
  
  cout<<"\nEnter The Element In First Array \n\n";
  
 for(i=0;i<m;i++)
 {
  cin>>a[i];
 }
 
 cout<<"\nEnter The Size Of Second Array \n";
  cin>>n;
  
  cout<<"\nEnter The Element In Second Array \n\n";
  
 for(j=0;j<n;j++)
 {
  cin>>b[j];
 }
  
 unionofarray(a,b,m,n);
     return 0;
}
