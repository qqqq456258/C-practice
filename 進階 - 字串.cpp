#include<iostream>
#include<stdio.h> 
#include<string> 
using namespace std;

int main(){
	string str1;
	string str2 = "YourAreStudent";
	while(1){
		cout<<"請輸入一字串：\n";
		getline(cin,str1) ;
		if(str1.empty())cout << "輸入不得空白哦"<<endl;
		else if(str1.length()>10)cout << "輸入字數不得少於 1 0 哦"<<endl;
		else  break;
	}

	cout<<"str1："<<str1<<endl;
	cout<<"str2："<<str2<<endl;
	cout<<endl;
	
	cout<<"【 str2和str1比較 】"<<endl;
	if(str1!=str2) cout<<"不同。"<<endl;
	else if(str1==str2) cout<<"相同。"<<endl;
	cout<<endl;
	

   // assign: 指定字串 (字串  , 第幾個開始拿 , 拿接下來的字數) 
	cout<<"【 str1和str2的指定字串 】"<<endl;
    str1.assign(str1, 0, 5); 
    cout << "str1: " << str1 << endl; 
    str2.assign(str2, 5, 6); 
    cout << "str2: " << str2 << endl; 
	cout<<endl;
	

    // append: 字串串接
	cout<<"【 str1和str2的字串串接 】"<<endl; 
    string str5 = str1.append(str1, 0, 4); 
    str5 = str2.append(str2, 4, 6); 
    cout << "str5: " << str5 << endl; 
    cout<<endl;
    
    
    // find: 尋找字串位置 
	cout<<"【 str1的字串尋找位置 】"<<endl;
    cout << "尋找str1中的第一個pill: " 
         << str1.find("pill", 0) << endl; 
    cout<<endl;
    // insert: 插入字串 
    cout<<"【 在str1插入字串-_- 】"<<endl;
    cout << "str1: " 
         << str1.insert(5, "-_-") << endl; 
    cout<<endl;
    cout << "str1長度: " << str1.length() << endl; 
    cout<<endl;
    cout << "str1: " << str1 << endl; 
    cout << "str2: " << str2 << endl; 
    cout << "str5: " << str5 << endl; 
    return 0; 


} 
