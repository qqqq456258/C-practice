#include <iostream>
using namespace std;

int main()
{
int a ,n , b=1;
	cout<<"���C�Ӥp�� 10000 ������� A�A�@�w���@�ӥ���� N�A�ϱo A �� "<<endl;
	cout<<"N ����p��ε��� 10000�A�� A �� N+1 ����h�W�L 10000�C"<<endl;
	cout<<"��J�@�Ӿ�� A�A�L�X������ N �H�� A �� N ���誺�ȡA"<<endl;
	cout<<"�п�J�@�ӥ���ơG"<<endl;
	cin>>a;
	n=a;
	if(a>0)
	{
		while(a>0&&a<=10000)
		{
			a=a*n;
			b=b+1;
		} 
		cout<<"N���G"<<b-1<<"��Ȭ��G"<<a/n<<endl; 
	}
	else
	{
		cout<<"(���~)�Э��s��J����ơC"<<endl;
		 
	}
	
	return 0;
}
