#include<iostream>
#include<cstring>

using namespace std;

class node {
	public:
		double data;
		node *ptr;
};
node* function1(double input,node *head ,node *p,node *q,node *insert){

	if(head==NULL){

		cout << "Please input data > 0" << endl;
		cin >> input;
		if(input!=0){
			p = head;
			head = new node;
			head->data = input;
			head->ptr = p;

		}

		else {
			cout<<"��J�Ȥ��o���s"<<endl;
		}
	
	}	
	else if(head!=NULL){

		cout << "Please input data > 0" << endl;
		cin >> input;
		if(input==0){
			cout<<"��J�Ȥ��o���s"<<endl;
		}
		else if(input!=0){
			p = head;
			while(p!=NULL){
				if(p->data==input){
				cout<<"��J�쭫�ƪ��`�I�F�C"<<endl;
				break;
				}
				else{
				p=p->ptr;
				}
			}
			
			if(p==NULL){
				p = head;
				if(input > p->data){
					while(p &&input > p->data){
			
						q = p;
						p = p->ptr;
								
					}
					insert = new node;
					insert->data = input;
					q->ptr = insert;
					insert->ptr = p;
							
				}
	
				else{
					head = new node;
					head->data = input;
					head->ptr = p;		
				}
				
			}
		}
	}
	return head;
}
node* function3(double cutover,double g,node *head ,node *p,node *q){


			  cout<<"�п�J�n�R���`�I���ȡG"<<endl;
			  cin>>cutover;
	if(head!=NULL){ 
			if(head->data==cutover){
			  		head = head->ptr;

			  		cout<<"�w�R���C"<<endl;
			  		g++;
			  		

			  }
			if(g==0){
				  p = head;
				  q = p;
				while(p!=NULL){
					if(p->data==cutover){
						p = p->ptr;
						q->ptr =p;
						cout<<"�w�R���C"<<endl;
						break;
					}
					else{
						q = p;
						p = p->ptr;
					}
				}
				if(p==NULL){
					cout<<"����C�L���ȡC"<<endl;
					
				}
			} 
			g=0; 
			return head;
	} 
	else {
			
			cout<<"�L��C�C"<<endl; 
			return head;
	}

}

node function24(double choice,double input,double lookfor,double cutover,double g,node *head ,node *p,node *q,node *insert ){
	
		if(choice==2){
			
			cout<<"�п�J�Q�n�j�M�`�I���ȡG"<<endl;
			cin>>lookfor;
			p = head;
			while(p!=NULL){
				if(p->data==lookfor){
					cout<<"�s�b�C"<<endl;
					break;
				}
				else{
					p=p->ptr;
				}
			}
			if(p==NULL){
				cout<<"���s�b�C"<<endl;
				p=head;	
			}
		}
		
		
		if(choice==4){
			
			cout<<endl<<endl<<"The linked list is"<<endl;
			p = head;
			while (p){
				cout<<p->data<<" -> ";
				p = p->ptr;
			}	
            cout<<"||"<<endl;
            
		}
		

}



int main(){
	double choice=1,input=1.00 ,lookfor=1.00 ,g = 0,cutover = 1.00;
	node *head = NULL, *p ,*q ,*insert = NULL;

do{
	cout << "�п�ܤU�C�\\��G" <<endl<<endl<<"��.�W�[�`�I�C"<<endl<<"��.�d�߸`�I�C"<<endl<<"��.�R���`�I�C"<<endl<<"��.�C�L�`�I�C"<<endl<<"��.���}�C"<<endl; 
	cin >> choice;
while(choice!=1&&choice!=2&&choice!=3&&choice!=4&&choice!=5)
{
	cout<<"�Э��s��J�G"<<endl;
	cin>> choice; 
};
if(choice==1)
	head = function1(input,head ,p,q,insert);

else if(choice==2 ||  choice==4){
	function24(choice, input,lookfor,cutover,g , head ,p ,q , insert);
}
else if(choice==3){
	head=function3(cutover,g , head ,p ,q );
	
	
}
}while(choice>=1 && choice<=4);

}
