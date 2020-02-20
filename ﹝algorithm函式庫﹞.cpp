#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a=1,b=2,c=3;
	swap(a , b); // 交換值 
	cout<<a<<b<<endl;
	c = max(a , c); // 最大值  
	cout<<c<<endl;
	c = min(b,c); // 最小值  
	cout<<c<<endl;
} 
