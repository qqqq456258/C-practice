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
			cout<<"���~�A���s��J���t�ε���ƦC�C";
			cout<<endl;
	}

	return 0;
}
