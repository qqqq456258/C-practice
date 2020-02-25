#include<iostream>
using namespace std;

int main()
{
	int a ;
	cout<<"自由國小有新生 200 名，要編入四個班級裡，學校的作法是將學生依名字的筆劃順序編了 1 到 200 號，\n";
	cout<<"將以編號來編班。\n"; 
	cout<<"請輸入您的編號：\n";
	cin>>a;
	
	switch(a%5)
	{
		case 1:
			cout<<"您是第一班。"<<endl;
			break; 
		case 2:
			cout<<"您是第二班。"<<endl;
			break; 
		case 3:
			cout<<"您是第三班。"<<endl;
			break; 
		case 4:
			cout<<"您是第四班。"<<endl;
			break; 
		default:
			cout<<"錯誤(輸入值別超過1~200)"<<endl;
			break; 
			

	}
	return 0;
}
 
