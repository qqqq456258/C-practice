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
	//  輸入node 之值大於head,以insert插入整的串列。 
	else if(input==0){
		break;
	}
	//  輸入node 之值為0跳出。 
	else{
		head = new node;
		head->data = input;
		head->ptr = p;		
	}
	//  輸入node 之值小於head,以head = new node放在整個串列的開頭。
}

cout<<endl<<endl<<"The linked list is"<<endl;
p = head;
while (p){
	cout<<p->data<<" -> ";
	p = p->ptr;
}	
cout<<"||"<<endl;
			
}

