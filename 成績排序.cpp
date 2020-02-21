#include <iostream>
using namespace std;

int main()
{
int s[10];
int n[10];
cout<<"請依座號一一輸入成績："<<endl; 
for(int i=0;i<=9;i++)
{
n[i]=i+1;
cout<<"請輸入"<<i+1<<"號成績："<<endl;
cin>>s[i];

}
for(int i=0;i<=9;i++)
{
        for(int j=i+1;j<=9;j++)
                if(s[i]<s[j])
{
                int k,g;
                k=s[i];
                s[i]=s[j];
                s[j]=k;
 
                g=n[i];
                n[i]=n[j];
                n[j]=g;
}

}

for(int i=0;i<=9;i++)
{
cout<<n[i]<<"號："<<s[i]<<"分"<<endl;  
}

}
