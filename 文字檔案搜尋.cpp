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
		cout<<"�п�J�n�䪺���e �G"<<endl;
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
			cout<<"�j�M��F�C"<<endl; 
		}	
		else
		{
			cout<<"�S�j�M��C"<<endl;
		}	
	}
	file1.close();
}
