#include<iostream>
using namespace std;
int q(int num,int (*mark)[5],int *temp,int i)
{
    for(int k=0;k<i;k++){
        for(int j=k+1;j<i;j++){
          if(*(*(mark+k)+num)<*(*(mark+j)+num)){
            for(int m=1;m <5;m ++){
                *temp=*(*(mark+k)+m);
                *(*(mark+k)+m)=*(*(mark+j)+m);
                *(*(mark+j)+m)=*temp;
            }
          }
        }   
    }
    for(int k=0;k<i;k++){
        cout<<"�W��:"<<k+1<<'\t'
            <<"�y��:"<<*(*(mark+k)+1)<<'\t'
            <<"�^�妨�Z:"<<*(*(mark+k)+2)<<'\t'
            <<"�ƾǦ��Z:"<<*(*(mark+k)+3)<<'\t'
            <<"��������:"<<*(*(mark+k)+4)<<endl;
    }
}
int main()
{
    int num,i=0;
    int mark[1000][5]={0},temp;
    do
    {
        cout<<"�п�ܤU�C�\\��"<<endl
            <<"1.�W�[�ǥ͸��"<<endl
            <<"2.�̭^�妨�Z�Ƨ�"<<endl 
            <<"3.�̼ƾǦ��Z�Ƨ�"<<endl
            <<"4.�̥������ƱƧ�"<<endl
            <<"5.���}"<<endl
            <<"�п�ܥ\��(1.2.3.4.5):";
        cin>>num;
        if(num==1){       
            for(int j=1;j<4;j++){
                cin>>mark[i][j];                
            }
            mark[i][4]=(mark[i][2]+mark[i][3])/2;
            i++;            
        }
        else if(num==2){
            q(num,mark,&temp,i);
        }
        else if(num==3){
            q(num,mark,&temp,i);
        }
        else if(num==4){
            q(num,mark,&temp,i);
        }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
    }while(num>0&&num<5);
}    
             
