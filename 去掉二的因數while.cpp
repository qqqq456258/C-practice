#include<iostream>
using namespace std;

int main()
{
	
	int a, b,n=0;
cout << "�G�O�@�ӫܯS�O���ơA�u�n�@�Ӿ�Ʀ��G���]�ơA���N�O�@�Ӱ��ơC" << endl;
cout << "�ӳo�ӵ{���|���J������ƥh�����Ҧ��G���]�ƫ�A�L�X�ӡC" << endl;
cout << "�п�J�@�ӥ���ơG" << endl;
cin >> a;

if(a>0)
{

while ( (a%2)==0 )
{

  	a=a/2;
	n=n+1;

}
cout <<"�Q�G���F"<<n<<"���ӳѤU"<<a<< endl; 

}
else
{
cout<<"(���~)�Э��s��J����ơC"<<endl; 
} 
return 0;
}
