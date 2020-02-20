#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long int m,n;
	cout<<"所謂 Armstrong number 指的是一個 n 位數的整數，它的所有位數的 n 次方和恰好等於自己。"<<endl;
	cout<<endl;
	cout<<"如；1634 = 14 + 64 + 34+ 44。"<<endl;
	cout<<endl;
	cout<<"請依題目需求在一定範圍內找出該範圍內的所有 armstrong numbers."<<endl;
	cout<<endl;

	while(cin>>n>>m){
		int def=0;
	for(int i=n;i<=m;i++){
		
		int z=i,k=1;
		while(z/=10){
			k++;			//判斷位數。 
		}
		
		int sum=0;
		z=i;
		while(z){
			sum+=pow(z%10,k);
			z/=10;
		}		
		
		if(sum==i){
			cout<<i<<" ";
			def++;
		}
	}
	if(def==0){
		cout<<"none";
	}
	cout<<endl;
}
	}
	

