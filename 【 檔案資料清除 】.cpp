#include<iostream>
#include<fstream>
using namespace std;

int main (){
	fstream file;
	file.open("D:\pa.txt" , ios::out);
	if(!file){
		cout<<"�ɮ׵L�k�}�ҡC"<<endl; 
	}
	else{
		cout<<"�w�M�šC"<<endl;
	}
	file.close();
	
} 
