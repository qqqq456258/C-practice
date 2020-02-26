#include<iostream>
#include<cmath>
using namespace std;

void f(double A,double B,double C,double D)
{
	if(D>0)
	cout<<"x="<<(-B+sqrt(D))/2*A<<" , "<<(-B-sqrt(D))/2*A<<endl;
	else if(D==0)
	cout<<"x="<<(-B+sqrt(D))/2*A<<endl;
	else if(D<0)
	cout<<"x="<<"¬°µê¼Æ"<<endl;
	
}
int main()
{
	long int a,b,c,d;
	while(cin>>a>>b>>c)
	{
		d=b*b-4*a*c;
			if(a!=0)
		{
		f(a,b,c,d);
			
		}
	
	}
	
	
}
