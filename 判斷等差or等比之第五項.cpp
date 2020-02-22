#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d, l;
	cin>>l;
	for(int n=1;n<=l;n++)
	{
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	
	
		if(b-a==c-b&&c-b==d-c&&b-a==d-c)
		{
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d+c-b;
			cout<<endl;
		}
		else if(b/a==c/b&&c/b==d/c&&b/a==d/c)
		{
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d*(c/b);
			cout<<endl;
		}
		else
			cout<<"錯誤，重新輸入等差或等比數列。";
			cout<<endl;
	}

	return 0;
}
