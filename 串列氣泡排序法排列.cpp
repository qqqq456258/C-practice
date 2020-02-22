#include <iostream>
using namespace std;


class node {
	public:
		int data;
		node *ptr;
};


int main(){
	node *head=NULL, *p , *g;
	int input=1,k=0;
	
	cout<<"Please input data>0 ";
	cin >>input;
	
	while(input>0){
		if(k==0){
			p=head;
			head= new node;
			head->data=input;
			head->ptr=p;
		}
		cout<<"Please input data>0 ";
		cin >>input;
		p=head;
		head= new node;
		head->data=input;
		head->ptr=p;
		
		k++;
	
		for(int i=0;i<k;i++){
			if(head->data > p->data){
				int pro=head->data;
				head->data=p->data;
				p->data=pro;
				if(k>=2){
					for(int j=0;j<k-1;j++){
						g=p;
						p=p->ptr;
						if(g->data > p->data){
							int pro=g->data;
							g->data=p->data;
							p->data=pro;
						}
					}
				}
			}
			else break;
		}
	}
	

	cout<<endl<<endl<<"The linked list is"<<endl;
	p=head;
	while (p){
		if(p->data==0) {
		p=p->ptr;
		}
		else{
		cout<<p->data<<" -> ";
		p=p->ptr;
		}
	}
	
	cout<<"||"<<endl;

}
