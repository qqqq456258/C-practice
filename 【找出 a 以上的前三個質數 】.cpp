#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a = 19999;
	int t = 0;
	cout<<sqrt(a);
	while(t!=4){
		int p =1;
		for(int k = 2; k<=sqrt(a) ; k++){
			if(a%k==0){
				p=0;
				break;
			}
		}
		if(p==1){	
			t++;
			cout<<a<<endl;
		}
		a++;
	}
} 
