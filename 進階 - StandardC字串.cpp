#include<iostream>
#include<stdio.h> //prinf() , fgets() = gets()
#include<cstring>
using namespace std;

int main(){
	char str1[80];
	char str2[]="YourAreStudent";
	cout<<"請輸入一字串：\n";
	fgets( str1 , sizeof(str1) , stdin ); 
	cout<<"str1："<<str1;
	cout<<"str2："<<str2<<endl;
	cout<<endl;
	
	strcpy(str1,str2);
	cout<<"【 str2複製到str1 】"<<endl;
	cout<<"str1："<<str1<<endl;
	cout<<"str2："<<str2<<endl;
	cout<<endl;
	
	strcat(str1,str2);
	cout<<"【 str2拼接到str1後方 】"<<endl;
	cout<<"str1："<<str1<<endl;
	cout<<"str2："<<str2<<endl;
	cout<<endl;
	
	cout<<"【 str長度 】"<<endl;
	cout<<"str1："<<strlen(str1)<<endl;
	cout<<"str2："<<strlen(str2)<<endl;
	cout<<endl;
	
	int a = strcmp(str1,str2);
	cout<<"【 str2和str1比較 】"<<endl;
	if(a>0)cout<<"不同。"<<endl;
	cout<<endl;
} 
