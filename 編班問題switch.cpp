#include<iostream>
using namespace std;

int main()
{
	int a ;
	cout<<"�ۥѰ�p���s�� 200 �W�A�n�s�J�|�ӯZ�Ÿ̡A�Ǯժ��@�k�O�N�ǥ̦ͨW�r���������ǽs�F 1 �� 200 ���A\n";
	cout<<"�N�H�s���ӽs�Z�C\n"; 
	cout<<"�п�J�z���s���G\n";
	cin>>a;
	
	switch(a%5)
	{
		case 1:
			cout<<"�z�O�Ĥ@�Z�C"<<endl;
			break; 
		case 2:
			cout<<"�z�O�ĤG�Z�C"<<endl;
			break; 
		case 3:
			cout<<"�z�O�ĤT�Z�C"<<endl;
			break; 
		case 4:
			cout<<"�z�O�ĥ|�Z�C"<<endl;
			break; 
		default:
			cout<<"���~(��J�ȧO�W�L1~200)"<<endl;
			break; 
			

	}
	return 0;
}
 
