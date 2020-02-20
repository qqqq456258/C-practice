#include<iostream>
using namespace std;

int main()
{
int h,m,s,i,k;
	cout<<"請輸入初始時間"<<endl<<"請輸入初始之小時：";
	cin>>h;
	cout<<"請輸入初始之分鐘：";
	cin>>m;
	cout<<"請輸入初始之秒數：";
	cin>>s;
	if((h<=23)&&(m<=59)&&(s<=59))
{

	for(i=s;i<=60;i++)
	{
		for(long k=1;k<=500000000;k++);
			if(i==60)
			{ 
				i=0;
				m++;
					if(m==60)
				{
				m=0;
				h++;
						if(h==24)
				{
				h=0;
				}
				}
			}

				cout<<"目前時間："<<h<<"時"<<m<<"分"<<i<<"秒"<<endl;
	}}
else 
cout<<"輸入錯誤"<<endl; 
return 0;
}

