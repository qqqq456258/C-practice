#include <iostream>
using namespace std;

int main()
{
    char name[9][10];
    int marks[3][9];
    int num; 
    cout<<"�п�J�ǥͤH�ơG\n";
    cin>>num;
    cout<<endl; 
    for(int i=0;i<num;i++)
    { 
      cout<<"�Ш̧ǿ�J�y���B�m�W�M���B�q�����Z "<<endl;
      cout<<endl; 
      cout<<"�п�J�y���G"<<endl;
      cin>>marks[0][i]; 
      cout<<"�п�J�m�W�G"<<endl;
      cin>>name[i];
      cout<<"�п�J��妨�Z�G"<<endl;
      cin>>marks[1][i];
      cout<<"�п�J�q�����Z�G"<<endl;
      cin>>marks[2][i];
    } 
      
}     
