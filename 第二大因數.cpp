#include <iostream>
using namespace std;

int main()
{
int a ,b ;

	cout<<"�o�N�|��X��J�Ȫ��ĤG�j�]��"<<endl;
	cout<<"�п�J�@�ӥ���ơG"<<endl;
	cin>>a;
	b=a-1;
	if(a>0)
	{
		while((a%b)!=0)
		{
			b=b-1;
		} 
		cout<<"�ĤG�j�]�ơG"<<b<<endl; 
	}
	else
	{
		cout<<"(���~)�Э��s��J����ơC"<<endl;
		 
	}
	
	return 0;
}
