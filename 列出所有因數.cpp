#include<iostream>
using namespace std;

int main()
{
	int a,b,n;
	cin>>a;
	for(n=1;n<=a;n++)
	{
		if(a%n==0)
		{
			cout<<n<<endl;
		}
	}
} 
