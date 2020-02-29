#include <iostream>
#include <cstring>
using namespace std;

int menu()
{
      int fun; 
      cout<<"請選擇以下功\能："<<endl;
      cout<<endl;
      cout<<endl;
      cout<<"１.依電腦成績排序："<<endl;
      cout<<endl; 
      cout<<"２.依平均成績排序："<<endl;
      cout<<endl;
      cout<<"３.依姓名查詢資料："<<endl;
      cout<<endl;  
      cout<<"４.離開"<<endl;
      cout<<endl;
      cin>>fun; 
       
    return fun; 
    
} 
int main()
{
    char name[9][10];
    int marks[4][9];
    int num,fun,GG;
 
    cout<<"請輸入學生人數：\n";
    cin>>num;
    cout<<endl;
	cout<<"請依序輸入座號、姓名和國文、電腦成績 "<<endl;
	cout<<endl; 
    for(int i=0;i<num;i++)
    { 
       
      cout<<"請輸入座號："<<endl;
      cin>>marks[0][i]; 
      cout<<"請輸入姓名："<<endl;
      cin>>name[i];
      cout<<"請輸入國文成績："<<endl;
      cin>>marks[1][i];
      cout<<"請輸入電腦成績："<<endl;
      cin>>marks[2][i];
      cout<<endl;
      marks[3][i]=((marks[1][i])*4+(marks[2][i])*6)/10; 
    } 
    while(1)
    {
   
    GG=menu();
    if(GG==1)
    {
               for(int i=0;i<num;i++)
               {
                      for(int j=i+1;j<num;j++)
                      {
                               if(marks[2][i]<marks[2][j])
                               { 
                                  
                                  int CHO;
                                  CHO=marks[0][i]; 
                                  marks[0][i]=marks[0][j]; 
                                  marks[0][j]=CHO;
                                  
                                  CHO=marks[1][i]; 
                                  marks[1][i]=marks[1][j]; 
                                  marks[1][j]=CHO;
                                  
                                  CHO=marks[2][i]; 
                                  marks[2][i]=marks[2][j]; 
                                  marks[2][j]=CHO;                                  
                                  
                                  char people[10]; 
                                  strcpy(people,name[i]); 
                                  strcpy(name[i],name[j]);
                                  strcpy(name[j],people);
                                  
                                  double  aver; 
                                  aver=marks[3][i]; 
                                  marks[3][i]=marks[3][j]; 
                                  marks[3][j]=aver; 
                               }   
                      }
               }
               
               for(int i=0;i<num;i++) 
               {
                       cout<<"座號："<<marks[0][i]<<"\t"<<"姓名："<<name[i]<<"\t"<<"國文成績："<<marks[1][i]<<"\t"<<"電腦成績："<<marks[2][i]<<"\t"<<"平均成績："<<marks[3][i]<<endl; 
           		}
			  
			   
                                    
     }
	else if(GG==2)
	{
		for(int i=0;i<num;i++)
               {
                      for(int j=i+1;j<num;j++)
                      {
                               if(marks[3][i]<marks[3][j])
                               { 
                                  
                                  int CHO;
                                  CHO=marks[0][i]; 
                                  marks[0][i]=marks[0][j]; 
                                  marks[0][j]=CHO;
                                  
                                  CHO=marks[1][i]; 
                                  marks[1][i]=marks[1][j]; 
                                  marks[1][j]=CHO;
                                  
                                  CHO=marks[2][i]; 
                                  marks[2][i]=marks[2][j]; 
                                  marks[2][j]=CHO;                                  
                                  
                                  char people[10]; 
                                  strcpy(people,name[i]); 
                                  strcpy(name[i],name[j]);
                                  strcpy(name[j],people);
                                  
                                  double  aver; 
                                  aver=marks[3][i]; 
                                  marks[3][i]=marks[3][j]; 
                                  marks[3][j]=aver; 
                               }   
                      }
               }
               
               for(int i=0;i<num;i++) 
               {
                       cout<<"座號："<<marks[0][i]<<"\t"<<"姓名："<<name[i]<<"\t"<<"國文成績："<<marks[1][i]<<"\t"<<"電腦成績："<<marks[2][i]<<"\t"<<"平均成績："<<marks[3][i]<<endl; 
			   }
			   
	}
	else if(GG==3)
	{
		char person[10];
		cout<<"請輸入姓名："<<endl; 
		cin>>person;
		for(int i=0;i<num;i++)
		{
			if(strcmp(person,name[i])==0)
			{
				cout<<"座號："<<marks[0][i]<<"\t"<<"姓名："<<name[i]<<"\t"<<"國文成績："<<marks[1][i]<<"\t"<<"電腦成績："<<marks[2][i]<<"\t"<<"平均成績："<<marks[3][i]<<endl;
			
			}
		}
			
	}
	else if(GG==4)
	{
		break;
	}
	 }
}     
