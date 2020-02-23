#include<iostream>

using namespace std;

int main(){
long int s[1000],num;

cout<<"你拿到一個整數，卻忍不住想把每個位數都乘在一起。例如看到 356 就會想要知道 3 * 5 * 6 的值為何。快寫個程式幫幫為了乘數字而快發瘋的自己吧！"<<endl;
cout<<endl;
cout<<"一開始請輸入一個數字 T，表示共有幾組測試資料。"<<endl;
cout<<endl;

while(cin>>num){
	cout<<"接下來輸入 T 組數字："<<endl;
	for(int i=0;i<num;i++){
		cin>>s[i];
	}
	for(int j=0;j<num;j++){
		int sum=1;
		int z=s[j];
		
		while(z){
			sum=sum*(z%10);
			z/=10;
		}
		if(s[j]==0){
			sum=0;
		}
		
		cout<<sum<<endl;
		
		
	}
	
}

} 
