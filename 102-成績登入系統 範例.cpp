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
			cout << "�m�W : " << stuname[i] << "\t" << "�y�� : " << marks[0][i] << "\t" << "��妨�Z : " << marks[1][i] << "\t" << "�q�����Z : " << marks[2][i] << "\t" << "������ : " << marks[3][i] << endl;
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
			cout << "�m�W : " << stuname[i] << "\t" << "�y�� : " << marks[0][i] << "\t" << "��妨�Z : " << marks[1][i] << "\t" << "�q�����Z : " << marks[2][i] << "\t" << "������ : " << marks[3][i] << endl;
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
			cout << "�m�W : " << stuname[i] << "\t" << "�y�� : " << marks[0][i] << "\t" << "��妨�Z : " << marks[1][i] << "\t" << "�q�����Z : " << marks[2][i] << "\t" << "������ : " << marks[3][i] << endl;
		}
	}
	else if (check == 3)
	{
		char temp2[9];
		cout << "�п�J�ǥͩm�W" << endl;
		cin >> temp2;
		cofn(temp2);
	}
}



int main()
{
	int check=0;
	cout << "�п�J�ǥͼƥ�" << endl;
	cin >> num;
	for (int i=0; i<num; i++)
	{
		cout << "�п�J�ǥͩm�W" << endl;
		cin >> stuname[i];
		cout << "�п�J�ǥͮy��" << endl;
		cin >> marks[0][i];
		cout << "�п�J�ǥͰ�妨�Z" << endl;
		cin >> marks[1][i];
		cout << "�п�J�ǥ͹q�����Z" << endl;
		cin >> marks[2][i];
		marks[3][i] = marks[1][i] * 0.4 + marks[2][i] * 0.6;
	}

	do
	{
		cout << "�п�ܤU�C�\��" << endl << "1.�̹q�����Z�Ƨ�" << endl << "2.�̥������ƱƧ�" << endl << "3.�̩m�W�d�߸��" << endl << "4.���}" << endl << "�п�ܤ@�ӥ\��" << endl ;
		cin >> check;

		while (check <= 0 || check >=5)
		{
			cout << "�Э��s��J" << endl;
			cin >> check;
		}

		menu(check);

	}while (check >=1 && check <=3);
}