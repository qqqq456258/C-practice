#include<iostream>

using namespace std;

int main(){
	int a , b =0;
	cin>>a;
	b = a%100;
	a  = a/100;
	switch (a){
		case 1:
			cout<<"�@�~"; 
			break;
		case 2:
			cout<<"�G�~"; 
			break;
		default:
			cout<<"�Y�~";
			break;	
	}
	switch (b){
		case 1:
			cout<<"�@�Z"; 
			break;
		case 2:
			cout<<"�G�Z"; 
			break;
		default:
			cout<<"�Y�Z";
			break;	
	}
	
	return 0;
} 
