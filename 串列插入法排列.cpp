#include<iostream>
using namespace std;

class node{	
	public:
		int data;
		node *ptr;
};

int main(){
	
double input=1;
node *q,*p,*head=NULL,*insert=NULL;
			
cout << "Please input data > 0" << endl;
cin >> input;

p = head;
head = new node;
head->data = input;
head->ptr = p;

while(input > 0){
	cout << "Please input data > 0" << endl;
	cin >> input;

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
	//  ��Jnode ���Ȥj��head,�Hinsert���J�㪺��C�C 
	else if(input==0){
		break;
	}
	//  ��Jnode ���Ȭ�0���X�C 
	else{
		head = new node;
		head->data = input;
		head->ptr = p;		
	}
	//  ��Jnode ���Ȥp��head,�Hhead = new node��b��Ӧ�C���}�Y�C
}

cout<<endl<<endl<<"The linked list is"<<endl;
p = head;
while (p){
	cout<<p->data<<" -> ";
	p = p->ptr;
}	
cout<<"||"<<endl;
			
}

