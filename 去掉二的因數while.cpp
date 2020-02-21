#include<iostream>
using namespace std;

int main()
{
	
	int a, b,n=0;
cout << "二是一個很特別的數，只要一個整數有二的因數，它就是一個偶數。" << endl;
cout << "而這個程式會把輸入的正整數去除掉所有二的因數後再印出來。" << endl;
cout << "請輸入一個正整數：" << endl;
cin >> a;

if(a>0)
{

while ( (a%2)==0 )
{

  	a=a/2;
	n=n+1;

}
cout <<"被二除了"<<n<<"次而剩下"<<a<< endl; 

}
else
{
cout<<"(錯誤)請重新輸入正整數。"<<endl; 
} 
return 0;
}
