#include<iostream>
#include<cmath> 
using namespace std;

int main()
{
	int n,j,k=1;
	while(cin>>n)
	{	
	if(n!=2)
	{
	
	if(n%2!=0)
	{
	
	for(j=3;j<=sqrt(n);j+=2)
	{
		if(n%j==0)
			{
				k=0;
				break;
			}
		
	}
		if(k!=0)
		{
			cout<<"YES\n";
			k=1;
		}
			else
			{
				cout<<"NO\n";
				k=1;
			}
	}
	else
	cout<<"NO\n";
	}
	else
	cout<<"YES\n";
	}
	return 0;
}
