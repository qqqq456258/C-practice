#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class student{
	protected:
		int data;
		string name;
		int chi;
		int eng;
	public:
		void in_data(int a){data=a;}
		void in_name(string b){name=b;}
		void in_chi(int c){chi=c;}
		void in_eng(int d){eng=d;}
		
		int get_data(){return data;}
		string gat_name(){return name;}
		int get_chi(){return chi;}
		int get_eng(){return eng;}	
};

class csstu:public student
{
	int program;
	double cs_average;
	
	public:
		void in_program(int e){program = e;}
		void in_cs_average(double f){cs_average = f;}
		
		int get_program(){return program;}
		double get_cs_average(){return cs_average;}
		
};
class pestu:public student
{
	int PE;
	double PE_average;
	
	public:
		void in_PE(int e){PE=e;}
		void in_PE_average(double g){PE_average = g;}
		
		int get_PE(){return PE;}
		double get_PE_average(){return PE_average;}
		
};

int main(){
	csstu a[5];
	pestu b[5];
	int num;
	double sum;
	string names;
	
	for(int i=0;i<5;i++){
	cout<<"�п�J�ǥͮy���G"<<endl;
	cin>>num;
	a[i].in_data(num);
	cout<<"�п�J�ǥͩm�W�G"<<endl; 
	cin.get();
	getline(cin,names);
	a[i].in_name(names);
	cout<<"�п�J�{���]�p���Z�G"<<endl;	
	cin>>num;
	a[i].in_program(num);
	cout<<"�п�J���]�p���Z�G"<<endl;	
	cin>>num;
	a[i].in_chi(num);
	cout<<"�п�J�^��]�p���Z�G"<<endl;	
	cin>>num;
	a[i].in_eng(num);
	
	sum = a[i].get_program()*0.5 + a[i].get_chi()*0.2 + a[i].get_eng()*0.3;
	a[i].in_cs_average(sum);
	}
	for(int i=0;i<5;i++){
	cout<<"�п�J�ǥͮy���G"<<endl;
	cin>>num;
	b[i].in_data(num);
	cout<<"�п�J�ǥͩm�W�G"<<endl; 
	cin.get();
	getline(cin,names);
	b[i].in_name(names);
	cout<<"�п�J��|���Z�G"<<endl;	
	cin>>num;
	b[i].in_PE(num);
	cout<<"�п�J��妨�Z�G"<<endl;	
	cin>>num;
	b[i].in_chi(num);
	cout<<"�п�J�^�妨�Z�G"<<endl;	
	cin>>num;
	b[i].in_eng(num);
	
	sum = b[i].get_PE()*0.4 + b[i].get_chi()*0.4 + b[i].get_eng()*0.2;
	b[i].in_PE_average(sum);

	}
	 
	
	for(int i=0;i<5;i++){
		for(int j = i+1;j<5;j++){
			if(a[i].get_cs_average() < a[j].get_cs_average()){
				csstu rid;
				rid = a[i];
				a[i] = a[j];
				a[j] = rid;
			}
			if(b[i].get_PE_average() < b[j].get_PE_average()){
				pestu tt;
				tt = b[i];
				b[i] = b[j];
				b[j] = tt;
			}
		}
	}
	
	
	for(int i=0;i<5;i++){
		cout<<"��"<<i+1<<"�W"<<'\t'<<"�m�W�G"<<a[i].gat_name()<<'\t'<<"�y���G"<<a[i].get_data()<<'\t'<<"�{�]���Z�G"<<a[i].get_program()<<'\t'<<"��妨�Z�G"<<a[i].get_chi()<<'\t'<<"�^�妨�Z�G"<<a[i].get_eng()<<'\t'<<"�`���Z�G"<<a[i].get_cs_average()<<endl; 
	}
	 
	
	
	for(int i=0;i<5;i++){
		cout<<"��"<<i+1<<"�W"<<'\t'<<"�m�W�G"<<b[i].gat_name()<<'\t'<<"�y���G"<<b[i].get_data()<<'\t'<<"��|���Z�G"<<b[i].get_PE()<<'\t'<<"��妨�Z�G"<<b[i].get_chi()<<'\t'<<"�^�妨�Z�G"<<b[i].get_eng()<<'\t'<<"�`���Z�G"<<b[i].get_PE_average()<<endl; 
	}
	
	
	
	
	
	
}
