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
  	cout<<"�ɮ׵L�k�}�ҡC"<<endl; 
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
