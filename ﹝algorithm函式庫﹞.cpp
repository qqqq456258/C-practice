#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a=1,b=2,c=3;
	swap(a , b); // �洫�� 
	cout<<a<<b<<endl;
	c = max(a , c); // �̤j��  
	cout<<c<<endl;
	c = min(b,c); // �̤p��  
	cout<<c<<endl;
} 
