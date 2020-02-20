#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node *ptr;
};

int main(){
	node *head;
	node *p;
	p=new node;
	head=p;
	for(int i=0;i<3;i++){
		
		p->data=i+1;
		p->ptr=new node;
		if(i!=2)
		p=p->ptr;		
	}
	p->ptr=NULL;
	
	while(head){
		cout<<head->data<<"->";
		head=head->ptr;
	}
	cout<<"h"<<endl;
} 
