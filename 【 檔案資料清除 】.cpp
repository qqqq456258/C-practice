#include<iostream>
#include<fstream>
using namespace std;

int main (){
	fstream file;
	file.open("D:\pa.txt" , ios::out);
	if(!file){
		cout<<"檔案無法開啟。"<<endl; 
	}
	else{
		cout<<"已清空。"<<endl;
	}
	file.close();
	
} 
