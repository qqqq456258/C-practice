#include<iostream>
using namespace std;

int main()
{
	long int a,b;
	while(cin>>a>>b)
	{
		if(a>=b)
		{
			for(int i=b;i>=1;i--)
			{
				if(a%i==0)
				{
					if(b%i==0)
					{
						cout<<i<<endl;
						break;
					}
				}
			}
		}
		else if(a<b)
		{
			for(int i=a;i>=1;i--)
			{
				if(b%i==0)
				{
					if(a%i==0)
					{
						cout<<i<<endl;
						break;
					}
				}
			}
		}
	}
	
} 
