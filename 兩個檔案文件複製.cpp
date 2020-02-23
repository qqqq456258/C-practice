#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream file1;
	file1.open("D:\\input.txt",ios::in);
	fstream file2;
	file2.open("D:\\output.txt",ios::out);

	if(!file1||!file2)
     {
        cerr << "Can't open file!\n" <<endl;   
	 }
	else
	{
		char outs;
		while(!file1.get(outs).eof())
		{
			char str[800];
			file1.getline(str,800);
			file2 << outs << str << endl;
		}	
	}
	file2.close();
}
