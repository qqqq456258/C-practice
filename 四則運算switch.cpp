#include<iostream>
using namespace std;

int main()
{
	float a , b ;
	char c;
	cout<<"這是A,B兩個數的四則運算，\n";
	cout<<"而中間的運算符號可以是加(+)、減(-)、乘(*)、除(/)等四種，\n"; 
	cout<<"然後將有計算結果。\n";
	cout<<"請輸入A：\n";
	cin>>a;
	cout<<"請輸入B：\n";
	cin>>b;
	cout<<"請輸入要 +, -, *, /？：\n";
	cin>>c;
	switch(c)
	{
		case '+':
			cout<<a+b<<endl;
			break; 
		case '-':
			cout<<a-b<<endl;
			break; 
		case '*':
			cout<<a*b<<endl;
			break; 
		case '/':
			cout<<"商："<<a/b<<endl;
			break; 
		default:
			cout<<"錯誤(要輸入加,減,乘,除呵)"<<endl;
			break; 
			

	}
	return 0;
}
 
