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
  else
  {	
  	while(F.get(ah)){
  		cout<<ah;
	  }
	  cout<<"\n";
	  F.close();
  }
  system ("pause");
  return 0;
}
