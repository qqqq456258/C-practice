# include <iostream>
using namespace std;
double mark[4][50];
int check1=0;

void menu(int check)
{
	int CHO;
	if(check==2)
	{
		CHO=1;
	}
	else if(check==3)
	{
		CHO=2;
	}
	else if(check==4)
	{
		CHO=3;
	}
	for(int k=0;k<check1;k++)
	{
		for(int j=k+1;j<check1;j++)
		{
			if(mark[CHO][k]<mark[CHO][j])
			{
				for(int G=0;G<=3;G++)
				{
					int NTUE=mark[G][k];
					mark[G][k]=mark[G][j];
					mark[G][j]=NTUE;
					NTUE=mark[G][k];
				}
				
			} 
		}
	}

for(int P=0;P<check1;P++)
{
	if(check==2)
	{
	 	cout<<"�y���G"<< mark[0][P]<<"\t"<<"�^�妨�Z�G"<<mark[1][P]<<"\t"<<endl;
	}
	else if(check==3)
	{	
		cout<<"�y���G"<< mark[0][P]<<"\t"<<"�ƾǦ��Z�G"<<mark[2][P]<<"\t"<<endl;
	}
	else if(check==4)
	{
		cout<<"�y���G"<< mark[0][P]<<"\t"<<"�������Z�G"<<mark[3][P]<<"\t"<<endl;
	}
	
}

}
int main()
{
	int check=0;
	do
	{
		
	
	cout << "�п�ܤU�C�\\��G" << endl << "1.�W�[�ǥ͸��" << endl << "2.�̭^�妨�Z�Ƨ�" << endl << "3.�̼ƾǦ��Z�Ƨ�" << endl << "4.�̥������ƱƧ�" << endl << "5.���}" << endl << "�п�ܤ@�ӥ\\��" << endl ;
	cin >>check;
	while(check<1||check>5)
	{
		cout<<"�Э��s��J�C\n";
		cin>>check;
	}
	if (check==1)
	{
		int GG=0;
		do
		{
			cout<<"�п�J�ǥͮy���G\n";
			cin>>mark[0][check1];
			GG=0;
			if(check1>0)
			{
				for(int i=0;i<check1;i++)
				{
					if(mark[0][i]==mark[0][check1])
					{
						GG=1;
					}
				}
			}
		} while(GG==1);
		
		cout<<"�п�J�^�妨�Z�G\n";
		cin>>mark[1][check1];
		cout<<"�п�J�ƾǦ��Z�G\n";
		cin>>mark[2][check1];
		mark[3][check1]=(mark[1][check1]+mark[2][check1])/2;
		check1+=1;
			
	}
	
	else if (check>=2&&check<=4)
	menu(check);
	}while(check>=1&&check<=4);
}
