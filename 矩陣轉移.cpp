#include <iostream>

using namespace std ;


int main()
{
 int a,b,s[100][100] ;
while(cin>>a>>b)
{
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cin>>s[j][i];
		}
		cout<<endl;
	}
	for(int k=0;k<b;k++)
	{
		for(int z=0;z<a;z++)
		{
			cout<<s[k][z];
			if(z<a-1)
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

} 
