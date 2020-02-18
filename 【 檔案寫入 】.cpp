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
  	cout<<"檔案無法開啟。"<<endl; 
  }
  else{
  	do{
		cout<<"請輸入( 取消請打 * )："<<endl;
		cin.getline(buffer, n ,'\n');
		if(buffer[0]!=ah){
			F.write(buffer, strlen(buffer));
			F<<"\n";
		}
	  }while(buffer[0]!=ah);
	
	cout<<"建立成功\"<<endl;
	F.close();
	
	}
		
	system("pause");
	return 0;	
}
