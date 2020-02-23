#include <iostream>
using namespace std;


class node {
		int data;
		node *ptr;
	public:
		void in_data(int a){
			data = a;
		}	
		void in_ptr(node *p){
			ptr=p;
		}
		int get_data(){
			return data;
		}
		node *get_ptr(){
			return ptr;
		}
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
			head->in_data(input);
			head->in_ptr(p);
		}
		cout<<"Please input data>0 ";
		cin >>input;
		p=head;
		head= new node;
		head->in_data(input);
		head->in_ptr(p);
		
		k++;
	
		
		for(int i=0;i<k;i++){
			if(head->get_data() > p->get_data()){
				int pro=head->get_data();
				head->in_data(p->get_data());
				p->in_data(pro);
				if(k>=2){
					for(int j=0;j<k-1;j++){
						g=p;
						p=p->get_ptr();
						if(g->get_data() > p->get_data()){
							int pro=g->get_data();
							g->in_data(p->get_data());
							p->in_data(pro);
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
		if(p->get_data()==0) {
		p=p->get_ptr();
		}
		else{
		cout<<p->get_data()<<" -> ";
		p=p->get_ptr();
		}
	}
	
	cout<<"||"<<endl;

}
