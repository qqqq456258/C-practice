#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  fstream F ; 
  char ah;
  char buffer[300];
  F.open("D:\pa.txt" , ios::in);
  if(!F){
  	cout<<"檔案無法開啟。"<<endl; 
  }
  else{
		do{
			F.getline(buffer , sizeof(buffer));
			cout<<buffer<<endl;
		}while(!F.eof());
	}
		
	F.close();
	system("pause");
	return 0;	
}
