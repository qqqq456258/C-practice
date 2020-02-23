#include <iostream>
#include <cstring>
using namespace std;

int main()
{
int g[10];
char name[10][80]; 
char a[80];
cout<<"請輸入姓名、成績"<<endl; 
cout<<endl; 
for(int i=0;i<=9;i++)
{
cout<<"請輸入姓名："<<endl;
cin.getline(name[i],80);

cout<<"請輸入成績："<<endl;
cin>>g[i];
cin.get();


}
for(int i=0;i<=9;i++)
{
        for(int j=i+1;j<=9;j++)
        {
        	if(g[i]<g[j])
			{
                int k;
                k=g[i];
                g[i]=g[j];
                g[j]=k;
                
                char p[10][80];
				strcpy(p[i],name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],p[i]);
			}
        }
                

}

for(int i=0;i<=9;i++)
{
cout<<"第"<<i+1<<"名\t"<<name[i]<<"\t"<<g[i]<<"分"<<endl;  
}

}
