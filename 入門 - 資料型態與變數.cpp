#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	cout<<"�i�r���`�q�j"<<endl; 
	cout<< "sizeof(2)  �G" << '\t' <<sizeof(2) <<endl;
	cout<< "sizeof(2.0)�G" << '\t' <<sizeof(2.0) <<endl;	
	cout<<endl;	
	cout<<"�i�U�줸���Ʀr����Q�줸�j"<<endl;
	cout<<"�Q�i���G"<< 26 <<endl;
	cout<<"�K�i���G"<< 032 <<endl;
	cout<<"�Q���i���G"<< 0x1A <<endl;	
	cout<<endl;	
	cout<<"�i�ϥ�const �ܼơj"<<endl;
	const int K = 1000;
	cout<<"��const int K ���|�� "<<K<<" �H�~����"<<endl;
	cout<<endl;	
	cout<<"�i�ϥ�rand����1~100���üơj"<<endl;
	int a = 0;
	srand((unsigned)time(NULL)); //��s�ü� 
	cout<<"a = "<<(rand() % 100)+1<<endl;
	cout<<endl;	
	cout<<"�i�ϥ�int->double�j���૬�]Cast�^�j"<<endl;	
	int b = 50;
	double c =0.0;
	cout<<"50 / 3 = "<<static_cast<double>(b)/3<<endl;

}
