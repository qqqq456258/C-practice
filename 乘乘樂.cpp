#include<iostream>

using namespace std;

int main(){
long int s[1000],num;

cout<<"�A����@�Ӿ�ơA�o�Ԥ���Q��C�Ӧ�Ƴ����b�@�_�C�Ҧp�ݨ� 356 �N�|�Q�n���D 3 * 5 * 6 ���Ȭ���C�ּg�ӵ{���������F���Ʀr�ӧֵo�ƪ��ۤv�a�I"<<endl;
cout<<endl;
cout<<"�@�}�l�п�J�@�ӼƦr T�A��ܦ@���X�մ��ո�ơC"<<endl;
cout<<endl;

while(cin>>num){
	cout<<"���U�ӿ�J T �ռƦr�G"<<endl;
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
