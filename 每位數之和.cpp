#include<iostream>
using namespace std;

int main()
{
int a ,b=0,s=0;
	cout<<"輸入一個正整數，然後印出它所有位數和\n";
	cout<<"請輸入一個正整數：\n";
	cin>>a;
	a=a*10;
if(a>0)
{
	for(a;a>=10;a=a/10)
	{
		b=a%10;
		s=s+b;
	}
	cout<<s+a<<endl;
} 
else
{
	cout<<"(錯誤)請重新輸入正整數。"<<endl;
}

return 0;
}
