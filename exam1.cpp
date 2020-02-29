#include <iostream>
using namespace std;

int main()
{
    char name[9][10];
    int marks[3][9];
    int num; 
    cout<<"請輸入學生人數：\n";
    cin>>num;
    cout<<endl; 
    for(int i=0;i<num;i++)
    { 
      cout<<"請依序輸入座號、姓名和國文、電腦成績 "<<endl;
      cout<<endl; 
      cout<<"請輸入座號："<<endl;
      cin>>marks[0][i]; 
      cout<<"請輸入姓名："<<endl;
      cin>>name[i];
      cout<<"請輸入國文成績："<<endl;
      cin>>marks[1][i];
      cout<<"請輸入電腦成績："<<endl;
      cin>>marks[2][i];
    } 
      
}     
