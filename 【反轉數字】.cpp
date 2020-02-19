#include<iostream> 
#include<cstring>
using namespace std;

int main(){
	int begin = 0;
	char a[80]= "0";
	cin.getline(a,80);
	char b[strlen(a)]= "0";
	for(int i =strlen(a)-1;i>=0;i--){
		b[strlen(a)-i-1]=a[i];
	}
	for(int i =0;i<strlen(a);i++){
		if(b[i] != 48){
			begin = i;
			break;
		}
		else if(begin==0 && i==strlen(a)-1) begin = strlen(a)-1;
	}
	for(int i =begin;i<strlen(a);i++){
		cout<<b[i];
	}
}
