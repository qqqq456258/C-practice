#include <iostream>
#include <cstring>
using namespace std;

int menu()
{
      int fun; 
      cout<<"�п�ܥH�U�\\��G"<<endl;
      cout<<endl;
      cout<<endl;
      cout<<"��.�̹q�����Z�ƧǡG"<<endl;
      cout<<endl; 
      cout<<"��.�̥������Z�Ƨ�"<<endl;
      cout<<endl;
      cout<<"��.�̩m�W�d�߸��"<<endl;
      cout<<endl;  
      cout<<"��.���}"<<endl;
      cout<<endl;
      cin>>fun; 
       
    return fun; 
    
} 
int main()
{
    char name[9][10];
    int marks[4][9];
    int num,fun,GG;
 
    cout<<"�п�J�ǥͤH�ơG\n";
    cin>>num;
    cout<<endl; 
    for(int i=0;i<num;i++)
    { 
      cout<<"�Ш̧ǿ�J�y���B�m�W�M���B�q�����Z "<<endl;
      cout<<endl; 
      cout<<"�п�J�y���G"<<endl;
      cin>>marks[0][i]; 
      cout<<"�п�J�m�W�G"<<endl;
      cin>>name[i];
      cout<<"�п�J��妨�Z�G"<<endl;
      cin>>marks[1][i];
      cout<<"�п�J�q�����Z�G"<<endl;
      cin>>marks[2][i];
      marks[3][i]=((marks[1][i])*4+(marks[2][i])*6)/10; 
    } 
    
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
                       cout<<"�y���G"<<marks[0][i]<<"\t"<<"�m�W�G"<<name[i]<<"\t"<<"��妨�Z�G"<<marks[1][i]<<"\t"<<"�q�����Z�G"<<marks[2][i]<<"\t"<<"�������Z�G"<<marks[3][i]<<endl; 
               }
                                    
     }
     system("pause"); 

}     
