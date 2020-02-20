#include <iostream> // cout , cin
#include <stdio.h> // printf
#include <vector> // vector 
#include <algorithm> // find() , sort() , reverse() 
#include <stdlib.h> // rand()
#include <time.h> // seed() , srand()

using namespace std;

int main(){
	int a = 0;
	vector<int> ivector;
	srand((unsigned)time(NULL));	//�üƺؤl 
	
	//�üƩ�i�h 
	for(int i =0 ; i<5 ; i++){
		ivector.push_back((rand()%99+1)); 
	}
	
	
	cout<<"ivector: ";
	for(vector<int>::iterator it = ivector.begin() ; it!= ivector.end() ; it++){ 
		cout<<*it<<"  ";  
	}
	cout<<endl;
	
    cout << "capacity: " << ivector.capacity() << endl;
    cout << "size: " << ivector.size() << endl;
   	cout<<endl; 
	
	//STL�Ƨ� 
    sort(ivector.begin() , ivector.end());  
	cout << "sort: " ;  
    for(vector<int>::iterator it = ivector.begin(); it != ivector.end() ;it++){
    	cout<<*it<<"  ";
	}
	
	//STL�j�M
	cout<<endl;
	cout<<"Please input number you would find : ";
	cin>>a;
	vector<int>::iterator it = find(ivector.begin() , ivector.end() , a);
	char *s[2]={"YES. " ,"NO. "}; // ���զr��}�COK. 
    if(it!= ivector.end()){
		printf("%s \n" ,*s);
	}
	else{
		printf("%s \n" ,*(s+1));
	}
	
	cout<<endl;
	
	//STL���� 
	reverse(ivector.begin(), ivector.end());
	for(vector<int>::iterator it = ivector.begin(); it != ivector.end() ;it++){
    	cout<<*it<<"  ";
	}
} 
