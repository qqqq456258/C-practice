#include<iostream>
using namespace std;

int main()
{
	int input_var;
	do{
		cout << "Enter a number(-1 = quit)";
		if(!(cin>>input_var)||input_var<-1){
			cout << "���~��J" <<endl;
			cin.clear();
			cin.ignore(10000,'\n');
			//cin.sync(); 
			
		}
		else if (input_var != -1){
			cout << "���T��J" <<input_var <<endl; 
		}
	}
	while(input_var !=-1);
}
/*�W����cin�q�{�ѼƬ�0,�Y���`�ާ@.?�ڿ�J�^��r��'k',
�����q�{�ѼƧ令fail�]�Y 1�^,�Y���~,
�A��cin.clear�N�q�{�ѼƧ�^ 0 �A 
��sync�Τ_�M����e��J�w�İϤ������e�C
*/ 
