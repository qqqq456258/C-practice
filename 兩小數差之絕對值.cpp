#include<iostream>
using namespace std;

int main()
{
	float a ,b ;
	cout<<"輸入兩個浮點數 A、B，將會印出兩數之間的差絕對值有多大"<<endl;
	cout<<"請輸入A："<<endl;
	cin>>a;
	cout<<"請輸入B："<<endl;
	cin>>b;
	
	if(a-b>=0)
	{
		
		cout<<a-b<<endl;
	}
	else
	{
			
		cout<<-(a-b)<<endl; 
	} 
	return 0;
} 
