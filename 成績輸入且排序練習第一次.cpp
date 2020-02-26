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
	 	cout<<"座號："<< mark[0][P]<<"\t"<<"英文成績："<<mark[1][P]<<"\t"<<endl;
	}
	else if(check==3)
	{	
		cout<<"座號："<< mark[0][P]<<"\t"<<"數學成績："<<mark[2][P]<<"\t"<<endl;
	}
	else if(check==4)
	{
		cout<<"座號："<< mark[0][P]<<"\t"<<"平均成績："<<mark[3][P]<<"\t"<<endl;
	}
	
}

}
int main()
{
	int check=0;
	do
	{
		
	
	cout << "請選擇下列功\能：" << endl << "1.增加學生資料" << endl << "2.依英文成績排序" << endl << "3.依數學成績排序" << endl << "4.依平均分數排序" << endl << "5.離開" << endl << "請選擇一個功\能" << endl ;
	cin >>check;
	while(check<1||check>5)
	{
		cout<<"請重新輸入。\n";
		cin>>check;
	}
	if (check==1)
	{
		int GG=0;
		do
		{
			cout<<"請輸入學生座號：\n";
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
		
		cout<<"請輸入英文成績：\n";
		cin>>mark[1][check1];
		cout<<"請輸入數學成績：\n";
		cin>>mark[2][check1];
		mark[3][check1]=(mark[1][check1]+mark[2][check1])/2;
		check1+=1;
			
	}
	
	else if (check>=2&&check<=4)
	menu(check);
	}while(check>=1&&check<=4);
}
