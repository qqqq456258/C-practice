#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int a,k=0,s[9999];
while(cin>>a)
{
if(a==1)
{
	cout<<'1';
}
else if(a>=2)
{

for(int i=0;i<=9998;i++)
{
	s[i]=a%2;
	a=a/2;
	
		if(a==1)
		{
			k++;
			cout<<'1';
			for(int j=k-1;j>=0;j--)
			{
				cout<<s[j];
				
			}
			k=0;
			break;	
		}
		else
		k++;
}
}
cout<<endl;
}


} 
