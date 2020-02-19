#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int a , num =0;
	cin>>a;
	for(int i = 1 ; i<sqrt(a);i++){
		if(a%i == 0){
			num ++;
		}
		if(num==2){
			a = a/i;
			cout<<a<<endl;
			break;
		}
	}
	
	return 0;
} 
