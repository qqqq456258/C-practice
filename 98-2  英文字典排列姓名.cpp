#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n;
	cout<<"請輸入人數："<<endl;
	cin>>n;
	cin.get();
	char name[n][10];
	
for(int i=0;i<n;i++)
{
	cout<<"請輸入英文姓名："<<endl;
	
	cin.getline(name[i],10);
	
}	

for(int k=0;k<n-1;k++)
{
	for(int j=k+1;j<n;j++)
	{
		if(strncmp(name[k],name[j],1)>0)
		{
			
			char g[10];
			strcpy(g,name[k]);
			strcpy(name[k],name[j]);
			strcpy(name[j],g);
			
		}
	}
}	


for(int p=0;p<n;p++)
{
	cout<<name[p]<<endl;
}	
	
	
	 
} 
