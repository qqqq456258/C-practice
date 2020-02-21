#include<iostream>
using namespace std;

int main()
{
int a ;
	cout<<"一般的成績都是以分數直接表示來互相做比較，因此將成績轉換成優、甲、乙、丙、丁等五個等第，規則如下：\n";
	cout<<endl;
	cout<<"優 → 90 分(含)至 100 分\n";
	cout<<"甲 → 80 分(含)以上，未滿 90 分\n";
	cout<<"乙 → 70 分(含)以上，未滿 80 分\n";
	cout<<"丙 → 60 分(含)以上，未滿 70 分\n";
	cout<<"丁 → 未滿 60 分\n";
	cout<<"請輸入你的分數：\n";
	cin>>a;
if(a>=90)
cout<<"等級：優";
else if(a>=80&&a<90)
cout<<"等級：甲";
else if(a>=70&&a<80)
cout<<"等級：乙";
else if(a>=60&&a<70)
cout<<"等級：丙";
else if(a>=0&&a<60)
cout<<"等級：丁";
else
cout<<"輸入超出範圍(錯誤)";
	return 0;
} 
