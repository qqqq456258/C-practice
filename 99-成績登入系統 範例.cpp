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
		cout << "�y�� : " << marks[0][i] << "\t" << "�^�妨�Z : " << marks[1][i] << "\t" << "�ƾǦ��Z : " << marks[2][i] << "\t" << "������ : " << marks[3][i] << endl;
	}
}

int main()
{
	int check = 0;
	do 
	{
		cout << "�п�ܤU�C�\��" << endl << "1.�W�[�ǥ͸��" << endl << "2.�̭^�妨�Z�Ƨ�" << endl << "3.�̼ƾǦ��Z�Ƨ�" << endl << "4.�̥������ƱƧ�" << endl << "5.���}" << endl << "�п�ܤ@�ӥ\��" << endl ;
		cin >> check;
		while (check <= 0 || check >=6)
		{
			cout << "�Э��s��J" << endl;
			cin >> check;
		}
		if (check == 1)
		{
			int same=0;
			do
			{
				cout << "�п�J�ǥͮy��" << endl;
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

			cout << "�п�J�ǥͪ��^�妨�Z�G" << endl;
			cin >> marks[1][check1];
			cout << "�п�J�ǥͪ��ƾǦ��Z�G" << endl;
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
