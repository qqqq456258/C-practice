#include<iostream>
#include<algorithm>
using namespace std;

void one(const int n) {
	int *b=new int[n];
	for(int a = 0; a<n ; a++){
		b[a] = a;
	}
	for(int a = 0; a<n ; a++){
		cout<<b[a]<<endl;;
	}
	delete []b ;
	
} 

int main(){
	int X=200;
	cin>>X;
	one(X);
}
