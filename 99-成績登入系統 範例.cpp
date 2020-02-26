#include <iostream>
using namespace std;
double marks[4][50];
int check1=0;

void menu(int check)
{
	int round;
	if (check == 2)
	{
		round = 1;
	}
	else if (check == 3)
	{
		round = 2;
	}
	else if (check == 4)
	{
		round = 3;
	}

	for (int i=0; i<check1; i++)
	{
		for (int j=i+1; j<check1; j++)
		{
			if (marks[round][i] < marks[round][j])
			{
				for (int k=0; k<=3; k++)
				{
					double temp = marks[k][i];
					marks[k][i] = marks[k][j];
					marks[k][j] = temp;
					temp = marks[k][i];
				}
			}
		}
	}
	for (int i=0; i<check1; i++)
	{
		cout << "座號 : " << marks[0][i] << "\t" << "英文成績 : " << marks[1][i] << "\t" << "數學成績 : " << marks[2][i] << "\t" << "平均分 : " << marks[3][i] << endl;
	}
}

int main()
{
	int check = 0;
	do 
	{
		cout << "請選擇下列功能" << endl << "1.增加學生資料" << endl << "2.依英文成績排序" << endl << "3.依數學成績排序" << endl << "4.依平均分數排序" << endl << "5.離開" << endl << "請選擇一個功能" << endl ;
		cin >> check;
		while (check <= 0 || check >=6)
		{
			cout << "請重新輸入" << endl;
			cin >> check;
		}
		if (check == 1)
		{
			int same=0;
			do
			{
				cout << "請輸入學生座號" << endl;
				cin >> marks[0][check1];
				same=0;
				if (check1 > 0)
				{
					for(int i=0; i<check1; i++)
					{
						if (marks[0][check1] == marks[0][i])
						{
							same = 1;
						}
					}
				}

			}while(same == 1);

			cout << "請輸入學生的英文成績：" << endl;
			cin >> marks[1][check1];
			cout << "請輸入學生的數學成績：" << endl;
			cin >> marks[2][check1];
			marks[3][check1] = ( marks[1][check1] + marks[2][check1] ) / 2;
			check1 += 1;
		}
		else if (check >=2 && check <=4)
		{
			menu(check);
		}
	}while (check >=1 && check <=4);
}
