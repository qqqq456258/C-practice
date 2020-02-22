#include<iostream>
using namespace std;

int main()
{
	int s;
	while(cin>>s)
	if(((s%4==0)&&(s%100!=0))||(s%400==0))
	{
		cout<<"¶|¦~"<<endl;
	}
	else
	{ 
		cout<<"¥­¦~"<<endl; 
	} 
	return 0;
}
