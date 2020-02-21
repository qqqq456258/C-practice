#include<iostream>
using namespace std;

int main()
{
	int i,j,g,n=0,a=0;
	cin>>j;
	
	for(i=1;i<=j;i++)
	{
		g=i%;
		
		if(i%7==0||g%7==0)
		{
			n=n+1;
		}		
		else if(i%7==0&&g%7==0)
		{
			a=a+1;
		}
		else
		{
			break;
		}
	}
	cout<<n-a;
	
	return 0;
}
