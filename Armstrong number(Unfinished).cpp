#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long int m,n;
	cout<<"�ҿ� Armstrong number �����O�@�� n ��ƪ���ơA�����Ҧ���ƪ� n ����M��n����ۤv�C"<<endl;
	cout<<endl;
	cout<<"�p�F1634 = 14 + 64 + 34+ 44�C"<<endl;
	cout<<endl;
	cout<<"�Ш��D�ػݨD�b�@�w�d�򤺧�X�ӽd�򤺪��Ҧ� armstrong numbers."<<endl;
	cout<<endl;

	while(cin>>n>>m){
		int def=0;
	for(int i=n;i<=m;i++){
		
		int z=i,k=1;
		while(z/=10){
			k++;			//�P�_��ơC 
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
	

