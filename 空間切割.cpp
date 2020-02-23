#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"對任意正整數n，空間中的n 個平面最多可將空間切成幾個區域？"<<endl;
	cout<<endl;
	cout<<"請輸入n："<<endl;
	 
	while(cin>>n){
		cout<<n+1+n*(n+1)*(n-1)/6<<endl;
	}
} 
