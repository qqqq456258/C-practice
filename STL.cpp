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
	srand((unsigned)time(NULL));	//亂數種子 
	
	//亂數放進去 
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
	
	//STL排序 
    sort(ivector.begin() , ivector.end());  
	cout << "sort: " ;  
    for(vector<int>::iterator it = ivector.begin(); it != ivector.end() ;it++){
    	cout<<*it<<"  ";
	}
	
	//STL搜尋
	cout<<endl;
	cout<<"Please input number you would find : ";
	cin>>a;
	vector<int>::iterator it = find(ivector.begin() , ivector.end() , a);
	char *s[2]={"YES. " ,"NO. "}; // 嘗試字串陣列OK. 
    if(it!= ivector.end()){
		printf("%s \n" ,*s);
	}
	else{
		printf("%s \n" ,*(s+1));
	}
	
	cout<<endl;
	
	//STL反轉 
	reverse(ivector.begin(), ivector.end());
	for(vector<int>::iterator it = ivector.begin(); it != ivector.end() ;it++){
    	cout<<*it<<"  ";
	}
} 
