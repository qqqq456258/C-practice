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
cout<<"�����L�Ƚm�ߡ�"<<endl;
cout<<endl;
cout<<"�n��X �u �� �� �Ы�1�A�n��X 1 �� 0 �Ы�2�G"<<endl;
cout<<"�п�J1 or 2 �H"<<endl;
cin>>k; 
if(k==1){
	boolalpha_cc();
}
else if(k==2){
	bool_cc();
}
}


