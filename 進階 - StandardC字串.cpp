#include<iostream>
#include<stdio.h> //prinf() , fgets() = gets()
#include<cstring>
using namespace std;

int main(){
	char str1[80];
	char str2[]="YourAreStudent";
	cout<<"�п�J�@�r��G\n";
	fgets( str1 , sizeof(str1) , stdin ); 
	cout<<"str1�G"<<str1;
	cout<<"str2�G"<<str2<<endl;
	cout<<endl;
	
	strcpy(str1,str2);
	cout<<"�i str2�ƻs��str1 �j"<<endl;
	cout<<"str1�G"<<str1<<endl;
	cout<<"str2�G"<<str2<<endl;
	cout<<endl;
	
	strcat(str1,str2);
	cout<<"�i str2������str1��� �j"<<endl;
	cout<<"str1�G"<<str1<<endl;
	cout<<"str2�G"<<str2<<endl;
	cout<<endl;
	
	cout<<"�i str���� �j"<<endl;
	cout<<"str1�G"<<strlen(str1)<<endl;
	cout<<"str2�G"<<strlen(str2)<<endl;
	cout<<endl;
	
	int a = strcmp(str1,str2);
	cout<<"�i str2�Mstr1��� �j"<<endl;
	if(a>0)cout<<"���P�C"<<endl;
	cout<<endl;
} 
