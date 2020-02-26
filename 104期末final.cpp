#include<iostream> 
#include<string>
#include<fstream>
using namespace std;

class member 
{
	public:		
		void set_number(string a){ number = a; }
		void set_name(string b){ name = b; }
		void set_time(int d){ time = time + d;}
				
		string get_number() { return number;}	
		string get_name() { return name;}
		int get_time() {return time;}
			
		
	protected:
	    string number;
	    string name;
	    int time;
};



class VIP:public member
{
	public:
		VIP(){V_rest = 0 , time = 0;}
		void set_ptr(VIP *p){ ptr=p;}
		void set_rest(int c){ V_rest = V_rest + c;}

		int get_rest() {return V_rest;}		
		VIP *get_ptr(){ return ptr;}
		
	private:
	    VIP *ptr;
		int V_rest;
		
};

class Ordinary:public member
{
	public:
		Ordinary(){O_rest = 0 , time = 0;}		
		void set_ptr(Ordinary *p){ ptr=p;}
		void set_rest(int c){ O_rest = O_rest + c;}

		int get_rest() {return O_rest;}
		Ordinary *get_ptr(){ return ptr;}
		
	private:
	    Ordinary *ptr;
		int O_rest;			
};

class ST:public member
{
	public:
		ST(){ST_rest = 0 , time = 0;}
		void set_ptr(ST *p){ ptr=p;}
		void set_rest(int c){ ST_rest = ST_rest + c;}

		int get_rest() {return ST_rest;}		
		ST *get_ptr(){ return ptr;}
		
	private:
	    ST *ptr;
		int ST_rest;			
};

class Menu
{
	public:

		void set(){ 
			if( !(cin>>select) )
			{
				cin.clear(); 
				cin.sync();
				select = 0; 
			} 
		}
		
		int get() { return select; }
		void show()
		{
		cout<<"�m�|���޲z�t�Ρn"<<endl<<"1.�s�W�|���C"<<endl<<"2.�R���|���C"<<endl<<"3.�i���C"<<endl<<"4.�d�ߡC"<<endl<<"5.�x�ȡC"<<endl<<"6.���}�C"<<endl<<"�п�ܿﶵ�]1��6�^�G"<<endl;		
		cout<<endl;
		}
	private:	
		int select;
};


Ordinary* O_function1(Ordinary *O_head , VIP *V_head , ST * ST_head)
{
	Ordinary *O_p ;
	VIP *V_p;
	ST *ST_p;
	string one_two , one_three;
	int have = 0;
	O_p = O_head; 
	V_p = V_head;
	ST_p = ST_head;
	
		cout << "�п�J�|���s���G" <<endl;
		cin >> one_two;
		
		while(O_p){
			if(one_two == O_p->get_number()){
				have = 1;
			}
			O_p = O_p->get_ptr();
		}
		while(V_p){
			if(one_two == V_p->get_number()){
				have = 1;
			}
			V_p = V_p->get_ptr();
		}
		while(ST_p){
			if(one_two == ST_p->get_number()){
				have = 1;
			}
			ST_p = ST_p->get_ptr();
		}
		
		if(have == 0){
			cout << "�п�J�|���m�W�G" <<endl;
			cin >> one_three;				
			O_p = O_head;
			O_head = new Ordinary;
			O_head->set_number(one_two);
			O_head->set_name(one_three);
			O_head->set_ptr(O_p);
			cout<<"�w�s�W�@��|���C"<<endl;
			return O_head;			
		}
		else{
			cout<<"�w�����|���I"<<endl;
			return O_head;
		}

}

		
VIP* V_function1(Ordinary *O_head , VIP *V_head , ST * ST_head)
{
	Ordinary *O_p ;
	VIP *V_p;
	ST *ST_p;
	string one_two , one_three;
	int have = 0;
	O_p = O_head; 
	V_p = V_head;
	ST_p = ST_head;
	
		cout << "�п�J�|���s���G" <<endl;
		cin >> one_two;
		
		while(O_p){
			if(one_two == O_p->get_number()){
				have = 1;
			}
			O_p = O_p->get_ptr();
		}
		while(V_p){
			if(one_two == V_p->get_number()){
				have = 1;
			}
			V_p = V_p->get_ptr();
		}
		while(ST_p){
			if(one_two == ST_p->get_number()){
				have = 1;
			}
			ST_p = ST_p->get_ptr();
		}
		
		if(have == 0){
			cout << "�п�J�|���m�W�G" <<endl;
			cin >> one_three;				
			V_p = V_head;
			V_head = new VIP;
			V_head->set_number(one_two);
			V_head->set_name(one_three);
			V_head->set_ptr(V_p);
			cout<<"�w�s�W�ר��|���C"<<endl;
			return V_head;			
		}
		else{
			cout<<"�w�����|���I"<<endl;
			return V_head;
		}

}


ST* ST_function1(Ordinary *O_head , VIP *V_head , ST * ST_head)
{
	Ordinary *O_p ;
	VIP *V_p;
	ST *ST_p;
	string one_two , one_three;
	int have = 0;
	O_p = O_head; 
	V_p = V_head;
	ST_p = ST_head;
		
		cout << "�п�J�|���s���G" <<endl;
		cin >> one_two;
		
		while(O_p){
			if(one_two == O_p->get_number()){
				have = 1;
			}
			O_p = O_p->get_ptr();
		}
		while(V_p){
			if(one_two == V_p->get_number()){
				have = 1;
			}
			V_p = V_p->get_ptr();
		}
		while(ST_p){
			if(one_two == ST_p->get_number()){
				have = 1;
			}
			ST_p = ST_p->get_ptr();
		}
		
		if(have == 0){
			cout << "�п�J�|���m�W�G" <<endl;
			cin >> one_three;				
		 	ST_p = ST_head;
		    ST_head = new ST;
			ST_head->set_number(one_two);
			ST_head->set_name(one_three);
			ST_head->set_ptr(ST_p);
			cout<<"�w�s�W�ǥͷ|���C"<<endl;
			return ST_head;			
		}
		else{
			cout<<"�w�����|���I"<<endl;
			return ST_head;
		}

}

void input(Ordinary *O_head, VIP *V_head , ST* ST_head){
	fstream file2;
	Ordinary *O_p;
	VIP *V_p;
	ST* ST_p;
	O_p = O_head;
	V_p = V_head;
	ST_p = ST_head;
			
	file2.open("member.txt",ios::out);
	while(O_p != NULL){
		file2 << O_p->get_name() <<endl;
		file2 << O_p->get_number() <<endl;
		file2 << O_p->get_rest() <<endl;
		file2 << O_p->get_time() <<endl;		
		O_p = O_p->get_ptr();
	}
		file2 << endl;
	while(V_p != NULL){
		file2 << V_p->get_name() <<endl;
		file2 << V_p->get_number() <<endl;
		file2 << V_p->get_rest() <<endl;
		file2 << V_p->get_time() <<endl;		
		V_p = V_p->get_ptr();
	}
		file2 << endl;
	while(ST_p != NULL){
		file2 << ST_p->get_name() <<endl;
		file2 << ST_p->get_number() <<endl;
		file2 << ST_p->get_rest() <<endl;
		file2 << ST_p->get_time() <<endl;		
		ST_p = ST_p->get_ptr();
	}
		file2 << endl;		
	    file2.close();
	    file2.clear();
		cout<<"�w�s��"<<endl;		
	
}

int main()
{
	Ordinary *O_head = NULL , *O_p , *O_q ;
	VIP *V_head = NULL , *V_p , *V_q ;
	ST *ST_head = NULL , *ST_p , *ST_q;
	int one_one = 1;
	int have = 0;
	int OO=-100;
	int VV=-50;
	int SS=0;
	int add = 1;
	int money = 0;
	string target;
	Menu m ;
	
	fstream file1;
	string K;
	int W;
	
	
	file1.open("member.txt",ios::in);
	if(!file1){
	cout << "�L�s�ɬ����C" <<endl; 
	} 
		
	while(1){
		getline(file1,K);
		if(K.empty())break;
		O_p = O_head;
		O_head = new Ordinary;
		O_head->set_name(K);
		getline(file1,K);
		O_head->set_number(K);
		file1 >> W;
		O_head->set_rest(W);
		file1 >> W;
		O_head->set_time(W);
		O_head->set_ptr(O_p);
		file1.get();	
	}			
	while(1){
		getline(file1,K);
		if(K.empty())break;
		V_p = V_head;
		V_head = new VIP;
		V_head->set_name(K);
		getline(file1,K);
		V_head->set_number(K);
		file1 >> W;
		V_head->set_rest(W);
		file1 >> W;
		V_head->set_time(W);
		V_head->set_ptr(V_p);
		file1.get();
	}
	while(1){
		getline(file1,K);
		if(K.empty())break;
		ST_p = ST_head;
		ST_head = new ST;
		ST_head->set_name(K);
		getline(file1,K);
		ST_head->set_number(K);
		file1 >> W;
		ST_head->set_rest(W);
		file1 >> W;
		ST_head->set_time(W);
		ST_head->set_ptr(ST_p);
		file1.get();
	}
	
		file1.close();	

	

	
do{	
    m.show();
    m.set();
    while(m.get() != 1 && m.get() != 2 && m.get() != 3 && m.get() != 4 && m.get() != 5 && m.get() != 6){
        cout << "��J���~ �Э��s��J(1~6):"<<endl; 
        m.set();
    }

	switch (m.get())
	{
		case 1:
			cout << "�п�ܷ|������ ( 1.�ר��|�� 2.�@��|�� 3.�ǥͷ|�� �C)�G"<<endl;			
			cin >> one_one;
			
			if(one_one == 1){
				V_head = V_function1(O_head , V_head , ST_head);				
			}
			else if(one_one == 2){
				O_head = O_function1(O_head , V_head , ST_head);
			}
			else if(one_one == 3){
				ST_head = ST_function1(O_head , V_head , ST_head);				
			}
			
			break; 
			
		case 2:
			have = 0;
			O_p = O_head; 
			V_p = V_head;
			ST_p = ST_head;
			O_q = NULL; 
			V_q = NULL;
			ST_q = NULL;			 
			
			cout<<"�п�J�n�R�����|���s���G"<<endl;
			cin >> target ;
			while(O_p&&have!=2){
					if(target == O_p->get_number()){
						have=1;
					}
					if(have==0){
						O_q = O_p;
						O_p = O_p->get_ptr();
					}
					if(O_q == NULL && have==1){
						O_head = O_p->get_ptr();
						cout<<"�w�R���|�����"<<endl;
						have=2;
					}
					if(O_q != NULL && have==1){
						O_q->set_ptr(O_p->get_ptr());
						cout<<"�w�R���|�����"<<endl;
						have=2;
					}
			}
			while(V_p&&have!=2){
					if(target == V_p->get_number()){
						have=1;
					}
					if(have==0){
						V_q = V_p;
						V_p = V_p->get_ptr();
					}
					if(V_q == NULL && have==1){
						V_head = V_p->get_ptr();
						cout<<"�w�R���|�����"<<endl;
						have=2;
					}
					if(V_q != NULL && have==1){
						V_q->set_ptr(V_p->get_ptr());
						cout<<"�w�R���|�����"<<endl;
						have=2;
					}
			}
			while(ST_p&&have!=2){
					if(target == ST_p->get_number()){
						have=1;
					}
					if(have==0){
						ST_q = ST_p;
						ST_p = ST_p->get_ptr();
					}
					if(ST_q == NULL && have==1){
						ST_head = ST_p->get_ptr();
						cout<<"�w�R���|�����"<<endl;
						have=2;
					}
					if(ST_q != NULL && have==1){
						ST_q->set_ptr(ST_p->get_ptr());
						cout<<"�w�R���|�����"<<endl;
						have=2;
					}
			}				 
			if(have==0){
					cout<<"�L���|���A�L�k�R��"<<endl;
			}

				break;

		case 3:

			have = 0;			
			O_p = O_head; 
			V_p = V_head;
			ST_p = ST_head;			
			
			cout<<"�п�J�|���s���G"<<endl;
			cin >> target ;

			while(O_p&&have!=2){
				if(target == O_p->get_number()){
						have=1;
					}
					if(have==0){
						O_q = O_p;
						O_p = O_p->get_ptr();
					}
					else if(have==1){
						if(O_p->get_rest()>=100){
							O_p->set_rest(OO);
							O_p->set_time(add);
							cout<<"�i�i���C"<<endl;
							cout<<endl;
						}
						else{
							cout<<"�l�B�����A���i�i���C"<<endl;
							cout<<endl;							
						}
						have=2;
					}
			}
			while(V_p&&have!=2){
				if(target == V_p->get_number()){
						have=1;
					}
					if(have==0){
						V_q = V_p;
						V_p = V_p->get_ptr();
					}
					else if(have==1){
						if(V_p->get_rest()>=50){
							V_p->set_rest(VV);
							V_p->set_time(add);
							cout<<"�i�i���C"<<endl;
							cout<<endl;
						}
						else{
							cout<<"�l�B�����A���i�i���C"<<endl;
							cout<<endl;							
						}
						have=2;
					}
			}
			while(ST_p&&have!=2){
				if(target == ST_p->get_number()){
						have=1;
					}
					if(have==0){
						ST_q = ST_p;
						ST_p = ST_p->get_ptr();
					}
					else if(have==1){
						if(ST_p->get_rest()>=100){
							ST_p->set_rest(SS);
							ST_p->set_time(add);
							cout<<"�i�i���C"<<endl;
							cout<<endl;
						}
						else{
							cout<<"�l�B�����A���i�i���C"<<endl;
							cout<<endl;							
						}
						have=2;
					}
			}		 
			if(have==0){
					cout<<"�L���|���C"<<endl;
			}
			have = 0;
				break;
		case 4:
			have = 0;			
			O_p = O_head; 
			V_p = V_head;
			ST_p = ST_head;	
			
			cout<<"�п�J�Q�j�M���|���s���G"<<endl;
			cin >> target ;
			 			 
			while(O_p){
				if(target == O_p->get_number()){
					cout<<"�|���s���G"<<O_p->get_number()<<"   �m�W�G"<<O_p->get_name()<<"   �l�B�G"<<O_p->get_rest()<<"   �������ơG"<<O_p->get_time()<<"   �|�������G�@��|���C"<<endl;
					have=1;
				}
				O_p = O_p->get_ptr();
			}
			while(V_p){
				if(target == V_p->get_number()){
					cout<<"�|���s���G"<<V_p->get_number()<<"   �m�W�G"<<V_p->get_name()<<"   �l�B�G"<<V_p->get_rest()<<"   �������ơG"<<V_p->get_time()<<"   �|�������G�ר��|���C"<<endl;
					have = 1;
				}
				V_p = V_p->get_ptr();
			}
			while(ST_p){
				if(target == ST_p->get_number()){
					cout<<"�|���s���G"<<ST_p->get_number()<<"   �m�W�G"<<ST_p->get_name()<<"   �l�B�G"<<ST_p->get_rest()<<"   �������ơG"<<ST_p->get_time()<<"   �|�������G�ǥͷ|���C"<<endl;
					have = 1;
				}
				ST_p = ST_p->get_ptr();
			}			
			if(have == 0){
				cout<<"�d�L���|���C"<<endl; 
			}
				break;
		case 5:		
	    	have = 0;
			money = 0;
			O_p = O_head; 
			V_p = V_head;
			ST_p = ST_head;
			cout<<"�п�J�|���s���G"<<endl;
			cin >> target ;

			while(O_p&&have!=2){
				if(target == O_p->get_number()){
						have=1;
					}
					if(have==0){
						O_q = O_p;
						O_p = O_p->get_ptr();
					}
					else if(have==1){
						cout << "�п�J�n�x�Ȫ��B�G" <<endl;
						cin >> money; 
						O_p->set_rest(money);
						cout<<"�w�x�ȡC"<<endl;
						cout<<endl;
						have=2;
					}
			}
			while(V_p&&have!=2){
				if(target == V_p->get_number()){
						have=1;
					}
					if(have==0){
						V_q = V_p;
						V_p = V_p->get_ptr();
					}
					else if(have==1){
						cout << "�п�J�n�x�Ȫ��B�G" <<endl;
						cin >> money; 
						V_p->set_rest(money);
						cout<<"�w�x�ȡC"<<endl;
						cout<<endl;
						have=2;
					}
			}
			while(ST_p&&have!=2){
				if(target == ST_p->get_number()){
						have=1;
					}
					if(have==0){
						ST_q = ST_p;
						ST_p = ST_p->get_ptr();
					}
					else if(have==1){
						cout << "�п�J�n�x�Ȫ��B�G" <<endl;
						cin >> money; 
						ST_p->set_rest(money);
						cout<<"�w�x�ȡC"<<endl;
						cout<<endl;
						have=2;
					}
			}		 
			if(have==0){
					cout<<"�L���|���C"<<endl;
			}
			have = 0;
				break;			
			
	    		
	    case 6:	
			input(O_head, V_head, ST_head);
			break;	

	}
}while(m.get() == 1 || m.get() == 2 || m.get() == 3 || m.get() == 4 || m.get() == 5);
}
