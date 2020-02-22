#include<iostream>
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
		cout<<"�п�ܤU�C�\\��G" <<endl<<endl<<"��.�W�[�ǥ͸�ơC"<<endl<<"��.�d�߾ǥ͸�ơC"<<endl<<"��.�R���ǥ͸�ơC"<<endl<<"��.�C�L�ǥ͸�ơC"<<endl<<"��.���}�C"<<endl;
		set_select();
		cout<<endl;
		}
};



node* function1(node *head ,node *p,node *q,node *insert,string name){

	double input=1;
	if(head==NULL){
		
		cout << "�п�J�y�� > 0" << endl;
		cin >> input;
		cin.get();
		
		if(input>0){
		cout << "�п�J�m�W�G" << endl;
		getline(cin,name);			
			p = head;
			head = new node;
			head->in_data(input);
			head->in_name(name);
			head->in_ptr(p);

		}
		

		else {
			cout<<"�y�����o���s�C"<<endl;
		}
	
	}	
	else if(head!=NULL){
		
		cout << "�п�J�y�� > 0" << endl;
		cin >> input;
		cin.get();
		if(input==0){
			cout<<"��J�Ȥ��o���s�C"<<endl;
		}
		else if(input!=0){

			p = head;
			while(p!=NULL){
				if(p->get_data()==input){
				cout<<"��J�쭫�ƪ��y���F�C"<<endl;
				break;
				}
				else{
				p=p->get_ptr();
				}
			}
			
			if(p==NULL){
				cout << "�п�J�m�W�G" << endl;
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

node* function2(node *head ,node *p ,string lookfor_name){
	
			double way,num,no_repeat = 0;
			
			p = head;			
			cout<<"�п�ܬd�ߤ覡�G"<<endl<<"��.�̮y���C"<<endl<<"��.�̩m�W�C"<<endl;
			cout<<endl;
			cin>>way;
			if(way==1){
				cout<<"�п�J�Q�n�j�M���y���G"<<endl;
				cin>>num; 
				
				while(p!=NULL){
				if(p->get_data()==num){
					cout<<"��"<<p->get_data()<<"��"<<'\t'<<"�m�W�G"<<p->get_name()<<endl;
					
					break;
				}
				else{
					p=p->get_ptr();
				}
				}
					if(p == NULL){
					cout<<"�L���y���C"<<endl;
					p = head;	
				}
			}	
			else if(way==2){
				cin.get();
				cout<<"�п�J�Q�n�j�M���m�W�G"<<endl;
				getline(cin,lookfor_name);
				
				while(p!=NULL){
				if(p->get_name()==lookfor_name){
					cout<<"��"<<p->get_data()<<"��"<<'\t'<<"�m�W�G"<<p->get_name()<<endl;
					no_repeat++;
					p=p->get_ptr();
				}
				else{
					p=p->get_ptr();
				}
				}
				if(p==NULL){
					if(no_repeat==0){
						cout<<"�L���m�W�C"<<endl;
						p=head;		
					}
					if(no_repeat>0){
						p=head;		
					}
				}
			}
			else{
				cout<<"�L�Ī��\\���ܡC"<<endl; 
			}
			
			
			
}

node* function3(node *head ,node *p,node *q){


			double cutover,g = 0;
			cout<<"�п�J�n�R�����H���y���G"<<endl;
			cin>>cutover;
  
	if(head!=NULL){ 
			if(head->get_data()==cutover){
			  		head = head->get_ptr();

			  		cout<<"�w�R���C"<<endl;
			  		g++;
			  		

			  }
			if(g==0){
				  p = head;
				  q = p;
				while(p!=NULL){
					if(p->get_data()==cutover){
						p = p->get_ptr();
						q->in_ptr(p);
						cout<<"�w�R���C"<<endl;
						break;
					}
					else{
						q = p;
						p = p->get_ptr();
					}
				}
				if(p==NULL){
					cout<<"�L���y���C"<<endl;
					
				}
			} 
			g=0; 
			return head;
	} 
	else {
			
			cout<<"�L��ơC"<<endl; 
			return head;
	}

}

		
node* function4(node *head ,node *p){
			
			cout<<endl<<endl<<"The linked list is"<<endl;
			p = head;
			while (p){
				cout<<"��"<<p->get_data()<<"��"<<'\t'<<"�m�W�G"<<p->get_name()<<endl;
				p = p->get_ptr();
			}	
            cout<<"||"<<endl;
            
}



int main(){

	node *head = NULL, *p ,*q ,*insert = NULL;
	string name;
	MENU m ;
do{
	m.show(); 
    if(m.get_select()!=1&&m.get_select()!=2&&m.get_select()!=3&&m.get_select()!=4&&m.get_select()!=5)
		{
		cout<<"�Э��s��J�G"<<endl;
		m.set_select();
		}
if(m.get_select()==1)
	head = function1(head ,p,q,insert,name);

else if(m.get_select()==2){
	function2(head ,p,name);
}
else if( m.get_select()==3){
	head=function3(head ,p ,q);	
}
else if(m.get_select()==4){
	function4(head ,p);
}

}while(m.get_select()>=1 && m.get_select()<=4);

}
