#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class node {
	
	double data;
	string name;
	node *ptr;
	
		public:
			void in_data(double a){
				data = a;
			}
			void in_ptr(node *p){
				ptr=p;
			}
			void in_name(string b){
				name = b;
			}							
			double get_data(){
				return data;
			}
			string get_name(){
				return name;
			}
			node *get_ptr(){
				return ptr;
			}
};

class MENU{
	
	double select;
	
	public:

		void set_select(){ cin>>select; }
		double get_select() { return select; }
		void show(){
		cout<<"請選擇下列功\能：" <<endl<<endl<<"１.增加學生資料。"<<endl<<"２.查詢名次。"<<endl<<"３.刪除節點(未改)。"<<endl<<"４.列印資料。"<<endl<<"５.離開。"<<endl;
		set_select();
		}
};



node* function1(double input,node *head ,node *p,node *q,node *insert,string name){

	if(head==NULL){

		cout << "請輸入名次 > 0" << endl;
		cin >> input;
		cin.get();
		
		if(input>0){
		cout << "請輸入姓名：" << endl;
		getline(cin,name);			
			p = head;
			head = new node;
			head->in_data(input);
			head->in_name(name);
			head->in_ptr(p);

		}
		

		else {
			cout<<"輸入值不得為零。"<<endl;
		}
	
	}	
	else if(head!=NULL){
		
		cout << "請輸入名次 > 0" << endl;
		cin >> input;
		cin.get();
		if(input==0){
			cout<<"輸入值錯誤。"<<endl;
		}
		else if(input!=0){

			p = head;
			while(p!=NULL){
				if(p->get_data()==input){
				cout<<"輸入到重複的名次了。"<<endl;
				break;
				}
				else{
				p=p->get_ptr();
				}
			}
			
			if(p==NULL){
				cout << "請輸入姓名：" << endl;
				getline(cin,name);
				//cin.get();
				p = head;
				if(input > p->get_data()){
					while(p &&input > p->get_data()){
			
						q = p;
						p = p->get_ptr();
								
					}
					insert = new node;
					insert->in_data(input);
					insert->in_name(name);
					q->in_ptr(insert);
					insert->in_ptr(p);
							
				}
	
				else{
					head = new node;
					head->in_data(input);
					head->in_name(name);
					head->in_ptr(p);		
				}
				
			}
		}
	}
	return head;
}

node* function2(string lookfor_name,node *head ,node *p){
	
			p = head;
			cin.get();
			cout<<"請輸入想要搜尋之姓名："<<endl;
			getline(cin,lookfor_name);
			
			while(p!=NULL){
				if(p->get_name()==lookfor_name){
					cout<<"第"<<p->get_data()<<"名"<<'\t'<<"姓名："<<p->get_name()<<endl;
					
					break;
				}
				else{
					p=p->get_ptr();
				}
			}
			if(p==NULL){
				cout<<"無資料。"<<endl;
				p=head;	
			}
}

node* function3(double cutover,double g,node *head ,node *p,node *q){


			  cout<<"請輸入要刪除節點之值(X)："<<endl;
			  cin>>cutover;
	if(head!=NULL){ 
			if(head->get_data()==cutover){
			  		head = head->get_ptr();

			  		cout<<"已刪除。"<<endl;
			  		g++;
			  		

			  }
			if(g==0){
				  p = head;
				  q = p;
				while(p!=NULL){
					if(p->get_data()==cutover){
						p = p->get_ptr();
						q->in_ptr(p);
						cout<<"已刪除。"<<endl;
						break;
					}
					else{
						q = p;
						p = p->get_ptr();
					}
				}
				if(p==NULL){
					cout<<"此串列無此值。"<<endl;
					
				}
			} 
			g=0; 
			return head;
	} 
	else {
			
			cout<<"無串列。"<<endl; 
			return head;
	}

}

		
node* function4(node *head ,node *p){
			
			cout<<endl<<endl<<"The linked list is"<<endl;
			p = head;
			while (p){
				cout<<"第"<<p->get_data()<<"名"<<'\t'<<"姓名："<<p->get_name()<<endl;
				p = p->get_ptr();
			}	
            cout<<"||"<<endl;
            
}



int main(){
	double input=1.00 ,lookfor=1.00 ,g = 0,cutover = 1.00;
	node *head = NULL, *p ,*q ,*insert = NULL;
	string name;
	MENU m ;
do{
	m.show(); 
    if(m.get_select()!=1&&m.get_select()!=2&&m.get_select()!=3&&m.get_select()!=4&&m.get_select()!=5)
		{
		cout<<"請重新輸入："<<endl;
		m.set_select();
		}
if(m.get_select()==1)
	head = function1(input,head ,p,q,insert,name);

else if(m.get_select()==2){
	function2(name, head ,p);
}
else if( m.get_select()==3){
	head=function3(cutover,g , head ,p ,q );	
}
else if(m.get_select()==4){
	function4(head ,p);
}

}while(m.get_select()>=1 && m.get_select()<=4);

}
