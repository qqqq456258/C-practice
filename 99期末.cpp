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
        cout<<"名次:"<<k+1<<'\t'
            <<"座號:"<<*(*(mark+k)+1)<<'\t'
            <<"英文成績:"<<*(*(mark+k)+2)<<'\t'
            <<"數學成績:"<<*(*(mark+k)+3)<<'\t'
            <<"平均分數:"<<*(*(mark+k)+4)<<endl;
    }
}
int main()
{
    int num,i=0;
    int mark[1000][5]={0},temp;
    do
    {
        cout<<"請選擇下列功\能"<<endl
            <<"1.增加學生資料"<<endl
            <<"2.依英文成績排序"<<endl 
            <<"3.依數學成績排序"<<endl
            <<"4.依平均分數排序"<<endl
            <<"5.離開"<<endl
            <<"請選擇功能(1.2.3.4.5):";
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
             
