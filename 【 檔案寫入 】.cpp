#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
using namespace std;
int main()
{
  fstream F ; 
  const int n = 200;
  char ah = '*';
  char buffer[n];
  F.open("D:\pa.txt" , ios::out|ios::app);
  if(F.fail()){
  	cout<<"�ɮ׵L�k�}�ҡC"<<endl; 
  }
  else{
  	do{
		cout<<"�п�J( �����Х� * )�G"<<endl;
		cin.getline(buffer, n ,'\n');
		if(buffer[0]!=ah){
			F.write(buffer, strlen(buffer));
			F<<"\n";
		}
	  }while(buffer[0]!=ah);
	
	cout<<"�إߦ��\\"<<endl;
	F.close();
	
	}
		
	system("pause");
	return 0;	
}
