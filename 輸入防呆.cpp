#include<iostream>
using namespace std;

int main()
{
	int input_var;
	do{
		cout << "Enter a number(-1 = quit)";
		if(!(cin>>input_var)||input_var<-1){
			cout << "錯誤輸入" <<endl;
			cin.clear();
			cin.ignore(10000,'\n');
			//cin.sync(); 
			
		}
		else if (input_var != -1){
			cout << "正確輸入" <<input_var <<endl; 
		}
	}
	while(input_var !=-1);
}
/*上面的cin默認參數為0,即正常操作.?我輸入英文字母'k',
它的默認參數改成fail（即 1）,即錯誤,
再用cin.clear將默認參數改回 0 ， 
而sync用于清除當前輸入緩衝區中的內容。
*/ 
