#include<iostream>
using namespace std;

int main()
{
int a ,b=0,s=0;
	cout<<"��J�@�ӥ���ơA�M��L�X���Ҧ���ƩM\n";
	cout<<"�п�J�@�ӥ���ơG\n";
	cin>>a;
	a=a*10;
if(a>0)
{
	for(a;a>=10;a=a/10)
	{
		b=a%10;
		s=s+b;
	}
	cout<<s+a<<endl;
} 
else
{
	cout<<"(���~)�Э��s��J����ơC"<<endl;
}

return 0;
}
