#include<iostream>
using namespace std;

int main()
{
	int n,j,k;
	cin>>n;
	for(j=1;j<=n;j++)
	{
		for(k=1;k<=n;k++) 
		{
			
		if(k==j||k==n+1-j)
		{
		cout<<"�@";	
		}
		else if
		(k!=j&&k!=n+1-j)
		{
		cout<<"��";
		}
		}
		cout<<endl;
	
	}
	return 0;
}
