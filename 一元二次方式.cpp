#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c ,d;
	while(cin>>a>>b>>c)
	{
	d=(b*b-4*a*c);
	if(d>0)
		{
	
		if((-b+sqrt(d))/(2*a)==0||(-b-sqrt(d))/(2*a)==0)
		cout<<"Two different roots x1="<<0<<" , x2="<<0<<endl;
		else
		cout<<"Two different roots x1="<<(-b+sqrt(d))/(2*a)<<" , x2="<<(-b-sqrt(d))/(2*a)<<endl;
		}
	else if(d==0)
	{
		if((-b)/(2*a)==0)
		cout<<"Two same roots x="<<0<<endl;
		else
		cout<<"Two same roots x="<<(-b)/(2*a)<<endl;
	}

	else if(d<0)
	cout<<"No real root"<<endl;
	}
	return 0;
}
