#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	cout<<"【字面常量】"<<endl; 
	cout<< "sizeof(2)  ：" << '\t' <<sizeof(2) <<endl;
	cout<< "sizeof(2.0)：" << '\t' <<sizeof(2.0) <<endl;	
	cout<<endl;	
	cout<<"【各位元的數字皆轉十位元】"<<endl;
	cout<<"十進位制："<< 26 <<endl;
	cout<<"八進位制："<< 032 <<endl;
	cout<<"十六進位制："<< 0x1A <<endl;	
	cout<<endl;	
	cout<<"【使用const 變數】"<<endl;
	const int K = 1000;
	cout<<"而const int K 不會有 "<<K<<" 以外的值"<<endl;
	cout<<endl;	
	cout<<"【使用rand產生1~100的亂數】"<<endl;
	int a = 0;
	srand((unsigned)time(NULL)); //刷新亂數 
	cout<<"a = "<<(rand() % 100)+1<<endl;
	cout<<endl;	
	cout<<"【使用int->double強制轉型（Cast）】"<<endl;	
	int b = 50;
	double c =0.0;
	cout<<"50 / 3 = "<<static_cast<double>(b)/3<<endl;

}
