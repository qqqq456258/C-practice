#include<iostream>
using namespace std;

int main()
{
int a ;
	cout<<"�@�몺���Z���O�H���ƪ�����ܨӤ��۰�����A�]���N���Z�ഫ���u�B�ҡB�A�B���B�B�����ӵ��ġA�W�h�p�U�G\n";
	cout<<endl;
	cout<<"�u �� 90 ��(�t)�� 100 ��\n";
	cout<<"�� �� 80 ��(�t)�H�W�A���� 90 ��\n";
	cout<<"�A �� 70 ��(�t)�H�W�A���� 80 ��\n";
	cout<<"�� �� 60 ��(�t)�H�W�A���� 70 ��\n";
	cout<<"�B �� ���� 60 ��\n";
	cout<<"�п�J�A�����ơG\n";
	cin>>a;
if(a>=90)
cout<<"���šG�u";
else if(a>=80&&a<90)
cout<<"���šG��";
else if(a>=70&&a<80)
cout<<"���šG�A";
else if(a>=60&&a<70)
cout<<"���šG��";
else if(a>=0&&a<60)
cout<<"���šG�B";
else
cout<<"��J�W�X�d��(���~)";
	return 0;
} 
