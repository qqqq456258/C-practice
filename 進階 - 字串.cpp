#include<iostream>
#include<stdio.h> 
#include<string> 
using namespace std;

int main(){
	string str1;
	string str2 = "YourAreStudent";
	while(1){
		cout<<"�п�J�@�r��G\n";
		getline(cin,str1) ;
		if(str1.empty())cout << "��J���o�ťծ@"<<endl;
		else if(str1.length()>10)cout << "��J�r�Ƥ��o�֩� 1 0 �@"<<endl;
		else  break;
	}

	cout<<"str1�G"<<str1<<endl;
	cout<<"str2�G"<<str2<<endl;
	cout<<endl;
	
	cout<<"�i str2�Mstr1��� �j"<<endl;
	if(str1!=str2) cout<<"���P�C"<<endl;
	else if(str1==str2) cout<<"�ۦP�C"<<endl;
	cout<<endl;
	

   // assign: ���w�r�� (�r��  , �ĴX�Ӷ}�l�� , �����U�Ӫ��r��) 
	cout<<"�i str1�Mstr2�����w�r�� �j"<<endl;
    str1.assign(str1, 0, 5); 
    cout << "str1: " << str1 << endl; 
    str2.assign(str2, 5, 6); 
    cout << "str2: " << str2 << endl; 
	cout<<endl;
	

    // append: �r��걵
	cout<<"�i str1�Mstr2���r��걵 �j"<<endl; 
    string str5 = str1.append(str1, 0, 4); 
    str5 = str2.append(str2, 4, 6); 
    cout << "str5: " << str5 << endl; 
    cout<<endl;
    
    
    // find: �M��r���m 
	cout<<"�i str1���r��M���m �j"<<endl;
    cout << "�M��str1�����Ĥ@��pill: " 
         << str1.find("pill", 0) << endl; 
    cout<<endl;
    // insert: ���J�r�� 
    cout<<"�i �bstr1���J�r��-_- �j"<<endl;
    cout << "str1: " 
         << str1.insert(5, "-_-") << endl; 
    cout<<endl;
    cout << "str1����: " << str1.length() << endl; 
    cout<<endl;
    cout << "str1: " << str1 << endl; 
    cout << "str2: " << str2 << endl; 
    cout << "str5: " << str5 << endl; 
    return 0; 


} 
