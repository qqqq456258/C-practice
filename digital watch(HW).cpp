#include<iostream>
using namespace std;

int main()
{
int h,m,s,i,k;
	cout<<"�п�J��l�ɶ�"<<endl<<"�п�J��l���p�ɡG";
	cin>>h;
	cout<<"�п�J��l�������G";
	cin>>m;
	cout<<"�п�J��l����ơG";
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

				cout<<"�ثe�ɶ��G"<<h<<"��"<<m<<"��"<<i<<"��"<<endl;
	}}
else 
cout<<"��J���~"<<endl; 
return 0;
}

