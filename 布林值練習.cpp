#include<iostream>
using namespace std;

void boolalpha_cc(){
	bool a=1,b=0;
	cout<<boolalpha;
	cout<<a<<endl;
	cout<<b<<endl;
}
void bool_cc(){
	bool a,b;
	a=true;
	b=false;
	cout<<a<<endl;
	cout<<b<<endl;
}

int main(){
	int k;
cout<<"★布林值練習☆"<<endl;
cout<<endl;
cout<<"要輸出 真 或 假 請按1，要輸出 1 或 0 請按2："<<endl;
cout<<"請輸入1 or 2 ？"<<endl;
cin>>k; 
if(k==1){
	boolalpha_cc();
}
else if(k==2){
	bool_cc();
}
}


