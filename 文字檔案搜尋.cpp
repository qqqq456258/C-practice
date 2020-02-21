#include<iostream>
#include <fstream>
#include<string>
using namespace std;

int  main()
{
	string G;
	int C=0;
	fstream file1;
	file1.open("D:\\GG1.txt");

	
	if(!file1)
     {
        cerr << "Can't open file!\n" <<endl;   
	 }
	 else
	{
		char H;
		string target;
		cout<<"請輸入要找的內容 ："<<endl;
		cin>>target; 
		while(!file1.get(H).eof())
		{
			char Q[800];
			file1.getline(Q,800);
			G = H;
			G += Q;
			int i = G.find(target);
			if(i!=-1)
			{
				C++;
			}

		}
		if(C!=0)
		{
			cout<<"搜尋到了。"<<endl; 
		}	
		else
		{
			cout<<"沒搜尋到。"<<endl;
		}	
	}
	file1.close();
}
