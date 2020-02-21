#include <iostream>
using namespace std;

int main()
{
int a ,n , b=1;
	cout<<"對於每個小於 10000 的正整數 A，一定有一個正整數 N，使得 A 的 "<<endl;
	cout<<"N 次方小於或等於 10000，而 A 的 N+1 次方則超過 10000。"<<endl;
	cout<<"輸入一個整數 A，印出對應的 N 以及 A 的 N 次方的值，"<<endl;
	cout<<"請輸入一個正整數："<<endl;
	cin>>a;
	n=a;
	if(a>0)
	{
		while(a>0&&a<=10000)
		{
			a=a*n;
			b=b+1;
		} 
		cout<<"N為："<<b-1<<"其值為："<<a/n<<endl; 
	}
	else
	{
		cout<<"(錯誤)請重新輸入正整數。"<<endl;
		 
	}
	
	return 0;
}
