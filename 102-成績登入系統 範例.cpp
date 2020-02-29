#include <iostream>
#include <cstring>
using namespace std;
int num;
char stuname[9][9];
double marks[4][9];

void cofn(char name[9])
{
	char temp1[9];
	strcpy(temp1,name);
	for (int i=0; i<num; i++)
	{
		char temp2[9];
		strcpy(temp2,stuname[i]);
		if (temp1[0]==temp2[0])
		{
			cout << "姓名 : " << stuname[i] << "\t" << "座號 : " << marks[0][i] << "\t" << "國文成績 : " << marks[1][i] << "\t" << "電腦成績 : " << marks[2][i] << "\t" << "平均分 : " << marks[3][i] << endl;
		}
	}

}
void menu(int check)
{
	if (check == 1)
	{
		for (int i=0; i<num; i++)
		{
			for (int j=i+1; j<num; j++)
			{
				if (marks[2][i] < marks[2][j])
				{
					double temp = marks[0][i];
					marks[0][i] = marks[0][j];
					marks[0][j] = temp;
					temp = marks[1][i];
					marks[1][i] = marks[1][j];
					marks[1][j] = temp;
					temp = marks[2][i];
					marks[2][i] = marks[2][j];
					marks[2][j] = temp;
					temp = marks[3][i];
					marks[3][i] = marks[3][j];
					marks[3][j] = temp;
					char temp1[9];
					strcpy(temp1,stuname[i]);
					strcpy(stuname[i],stuname[j]);
					strcpy(stuname[j],temp1);
				}
			}
		}
		for (int i=0; i<num; i++)
		{
			cout << "姓名 : " << stuname[i] << "\t" << "座號 : " << marks[0][i] << "\t" << "國文成績 : " << marks[1][i] << "\t" << "電腦成績 : " << marks[2][i] << "\t" << "平均分 : " << marks[3][i] << endl;
		}
	}
	else if (check == 2)
	{
		for (int i=0; i<num; i++)
		{
			for (int j=i+1; j<num; j++)
			{
				if (marks[3][i] < marks[3][j])
				{
					double temp = marks[0][i];
					marks[0][i] = marks[0][j];
					marks[0][j] = temp;
					temp = marks[1][i];
					marks[1][i] = marks[1][j];
					marks[1][j] = temp;
					temp = marks[2][i];
					marks[2][i] = marks[2][j];
					marks[2][j] = temp;
					temp = marks[3][i];
					marks[3][i] = marks[3][j];
					marks[3][j] = temp;
					char temp1[9];
					strcpy(temp1,stuname[i]);
					strcpy(stuname[i],stuname[j]);
					strcpy(stuname[j],temp1);
				}
			}
		}
		for (int i=0; i<num; i++)
		{
			cout << "姓名 : " << stuname[i] << "\t" << "座號 : " << marks[0][i] << "\t" << "國文成績 : " << marks[1][i] << "\t" << "電腦成績 : " << marks[2][i] << "\t" << "平均分 : " << marks[3][i] << endl;
		}
	}
	else if (check == 3)
	{
		char temp2[9];
		cout << "請輸入學生姓名" << endl;
		cin >> temp2;
		cofn(temp2);
	}
}



int main()
{
	int check=0;
	cout << "請輸入學生數目" << endl;
	cin >> num;
	for (int i=0; i<num; i++)
	{
		cout << "請輸入學生姓名" << endl;
		cin >> stuname[i];
		cout << "請輸入學生座號" << endl;
		cin >> marks[0][i];
		cout << "請輸入學生國文成績" << endl;
		cin >> marks[1][i];
		cout << "請輸入學生電腦成績" << endl;
		cin >> marks[2][i];
		marks[3][i] = marks[1][i] * 0.4 + marks[2][i] * 0.6;
	}

	do
	{
		cout << "請選擇下列功能" << endl << "1.依電腦成績排序" << endl << "2.依平均分數排序" << endl << "3.依姓名查詢資料" << endl << "4.離開" << endl << "請選擇一個功能" << endl ;
		cin >> check;

		while (check <= 0 || check >=5)
		{
			cout << "請重新輸入" << endl;
			cin >> check;
		}

		menu(check);

	}while (check >=1 && check <=3);
}