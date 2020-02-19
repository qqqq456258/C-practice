#include<iostream> 
using namespace std;

int main(){
	int a = 1;
	while(cin>>a){
	if(a == 0){
		cout<<"1"<<endl;
	}
	else {
		a = a*a -a +2;
		cout<<a<<endl;
		}
		
	}
}


