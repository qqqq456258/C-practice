#include <iostream>
using namespace std;

int main(){
	while (1){
		int M = 0;
		int N = 0;
		while(1){
			cin>>M>>N;
			if(M==0||N==0){
				break;
			}
			else{
			if(M<N){
				int K = M;
				M = N;
				N = K;
			}	
			while(1){
				M = M%N;
				if(M==0){
					cout<<N<<endl;
					break;
				}
				int G = M;
				M = N;
				N = G;
			}				
			}
		}
	}	
}


