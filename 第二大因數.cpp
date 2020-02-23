#include <iostream>
using namespace std;

int main()
{
int a ,b ;

	cout<<"這將會找出輸入值的第二大因數"<<endl;
	cout<<"請輸入一個正整數："<<endl;
	cin>>a;
	b=a-1;
	if(a>0)
	{
		while((a%b)!=0)
		{
			b=b-1;
		} 
		cout<<"第二大因數："<<b<<endl; 
	}
	else
	{
		cout<<"(錯誤)請重新輸入正整數。"<<endl;
		 
	}
	
	return 0;
}
