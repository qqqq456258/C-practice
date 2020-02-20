#include<iostream>

using namespace std;

int main(){
	int a , b =0;
	cin>>a;
	b = a%100;
	a  = a/100;
	switch (a){
		case 1:
			cout<<"一年"; 
			break;
		case 2:
			cout<<"二年"; 
			break;
		default:
			cout<<"某年";
			break;	
	}
	switch (b){
		case 1:
			cout<<"一班"; 
			break;
		case 2:
			cout<<"二班"; 
			break;
		default:
			cout<<"某班";
			break;	
	}
	
	return 0;
} 
