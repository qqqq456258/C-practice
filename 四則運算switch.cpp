#include<iostream>
using namespace std;

int main()
{
	float a , b ;
	char c;
	cout<<"�o�OA,B��Ӽƪ��|�h�B��A\n";
	cout<<"�Ӥ������B��Ÿ��i�H�O�[(+)�B��(-)�B��(*)�B��(/)���|�ءA\n"; 
	cout<<"�M��N���p�⵲�G�C\n";
	cout<<"�п�JA�G\n";
	cin>>a;
	cout<<"�п�JB�G\n";
	cin>>b;
	cout<<"�п�J�n +, -, *, /�H�G\n";
	cin>>c;
	switch(c)
	{
		case '+':
			cout<<a+b<<endl;
			break; 
		case '-':
			cout<<a-b<<endl;
			break; 
		case '*':
			cout<<a*b<<endl;
			break; 
		case '/':
			cout<<"�ӡG"<<a/b<<endl;
			break; 
		default:
			cout<<"���~(�n��J�[,��,��,����)"<<endl;
			break; 
			

	}
	return 0;
}
 
