#include<iostream>
using namespace std;

int main(){
	int N;
	while(cin>>N){
		int grade;
	if(N>=0&&N<11){
		grade=6*N;
		cout<<grade<<endl;
	}
	else if(N>10&&N<21){
		grade=6*10+2*(N-10);
		cout<<grade<<endl;
	}
	else if(N>20&&N<40){
		grade=6*10+2*10+1*(N-20);
		cout<<grade<<endl;
	}
	else if(N>=40){
		grade=100;
		cout<<grade<<endl;
	}
	}
	
} 
