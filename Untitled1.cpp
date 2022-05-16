#include<iostream>
#include <string.h>
using namespace std;
int size=0;
int get_size()
{	int sze;
	cout<<"ENTER THE NO OF NODES YOU WANNA CREATE= ";
	cin>>sze;
	return sze;
}

struct node
{
	int in_data;
	node *ptr;
};

class List
{
	private:
		node *s,*c,*n,*temp;
		int pos;
		
	public:
		List()
		{
			s=c=n=temp=NULL;
			pos=0;
		}
		
		void create ()
			{	
				for (int i=1;i<=size;i++)
				{
				if(s==NULL)
					{	
						s= new node;
						cout<<"ENTER INTEGER = ";
						cin>>s->in_data;						
						s->ptr=NULL;
						c=s;	
					}
				else
					{
						n= new node;
						cout<<"ENTER INTEGER = ";
						cin>>n->in_data;
						n->ptr=NULL;
						c->ptr=n;
						c=n;	
					}
					
				}	
			}
			
			void InsertAtStart()
	{	
		if (s == 0)
		{	
			cout<<"NO LINKED LIST CREATED YET\nCREATE FIRST LINKED NOW"<<endl;
			
			s= new node;
			cout<<"ENTER INTEGER = ";
			cin>>s->in_data;						
			s->ptr=NULL;
			c=s;
			size++;
			pos++;
			
		}
		else
		{
			n = new node;
			cout<<"ENTER INTEGER = ";
			cin>>n->in_data;
			n->ptr = NULL;
			n->ptr = s;
			s = n;
			size++;
			pos++;
		}
	}
			void insert_last()
			{	
				if (s == 0)
				{	
					cout<<"NO LINKED LIST CREATED YET\nCREATE FIRST LINKED NOW"<<endl;
					
					s= new node;
					cout<<"ENTER INTEGER = ";
					cin>>s->in_data;						
					s->ptr=NULL;
					c=s;
					size++;
					pos++;
					
				}
				else
				{
					n= new node;
					cout<<"ENTER INTEGER = ";
					cin>>n->in_data;
					
					c->ptr=n;
					n->ptr=NULL;
					c=n;
					size++;
					pos++;
				}
				
			}
			
		void InsertAtSpecific()
	{	
		
			
		if(s==0)
		{
			cout<<"NO LINKED LIST CREATED YET\nCREATE FIRST LINKED NOW"<<endl;
			s = new node;
			cout<<"ENTER INTEGER = ";
			cin>>s->in_data;
			s->ptr=NULL;
			c=s;
			size++;
			pos++;
						
		}
		else
		{
		
			if (pos==1)
			{	
				
				cout<<"AS ONLY ONE NODE EXITS\tSO YOU CAN INSERT IN POS 1 ONLY!\nPRESS 1 TO INSERT";
//				pos++;
//				insert_last();
				
			}
			else
			
			{
				
			cout<<"Enter a postion where want to insert the new node?"<<endl;
			cin>>pos;
			
			
			
			
				if(pos>size || pos<0)
					{
						cout<<"Invalid psotion."<<endl;
					}
				else
					{	n = new node;
						cout<<"ENTER INTEGER = ";
						cin>>n->in_data;
						n->ptr=NULL;
						c=n;
						size++;
						
						c=s;
						for(int i=1; i<pos-1; i++)
						{
							c=c->ptr;
						}
						n->ptr = c->ptr;
						c->ptr = n;
					}
 	}		}
	}	
	
	void delete_start()
	{	
		if(s==0)
		{
			cout<<"No node created so can not delete anything."<<endl;
		}
		else
		{
			
			temp=s;
			s=s->ptr;
			temp->ptr=NULL;
			delete temp;
			
			cout<<"Node deleted sucessfully"<<endl;
			
		}
	
}
void delete_last()
	{	
		if(s==0)
		{
			cout<<"No node created so can not delete anything."<<endl;
		}
		else if (s->ptr==0)
		{
					s=0;
					cout<<"Node deleted sucessfully"<<endl;
		
			
		}
		else
		{
			c=s;	
			while(c->ptr->ptr!=NULL)
				{	
					c=c->ptr;	
				}
					temp=c->ptr;
					c->ptr=NULL;
					delete temp;
					cout<<"Node deleted sucessfully"<<endl;
		
			
		}
	
}
	
	void delete_sp()
	{	
		if(s==0)
		{
			cout<<"No node created so can not delete anything."<<endl;
		}
		else
		{	
		cout<<"Enter a postion where want to delete the new node?"<<endl;
		cin>>pos;
		if (pos==1)
		{	
			
			cout<<"AS ONLY ONE NODE EXITS\tSO YOU CAN DELETE POS 1 ONLY!\nPRESS 1 TO DELETE";	
		}
			
		else
		{
			
				if(pos>size || pos<0)
				{
					cout<<"Invalid position."<<endl;
				}
				else
				{
					c=s;
					for(int i=1; i<pos-1; i++)
					{
						c=c->ptr;
					}
					temp = c->ptr;
					c->ptr = c->ptr->ptr;
					delete temp;
					cout<<"Node deleted sucessfully"<<endl;
				}
			
			
		}
		}
	}
			
		void traversing ()
			{
				if(s==NULL)
					{
						cout<<"LIST IS EMPTY!"<<endl;	
					}
				else
					{
						c=s;
						
						while(c!=NULL)
							{
							cout<<c->in_data<<" "<<c->ptr<<endl;
							c=c->ptr;
							}


						
					}	
			}	
			
					
};
int main()
{	
	List obj;
	int slc;
	
	// DO WHILE FOR MENU DRIVEN 
	do{
	label:
	//CLEAR THE SCREEN
	system("cls");
	cout<<"SLECTION LIST::--\n0 FOR EXIT\n1 FOR CREATING NODES\n2 FOR INSERTION\n3 FOR DELETION\n4 FOR TRAVERSING"<<endl<<endl;
	cout<<"ENTER YOUR SELECTION= ";
	cin>>slc;
	//SELECTION TO SELECT WHICH OPERATION FOR MAIN MENUS
	switch(slc)
	{
		case 0:			
			break;
			
			
		case 1:
			int slc_1;
			label1:
			cout << "\nPress 0 TO EXIT\n";
	        cout << "Press 1 TO CREATING NODES\n";

	        cout<<"PRESS= ";
	        cin >> slc_1;
	        system("cls");
	        if(slc_1==0)
	        break;
	        else if (slc_1 == 1)
	        {	
	        	size=get_size();
				obj.create();
				goto label1;
	        }
            
			else
	        {
	            cout << "PRESS 0 TO 1 ONLY."<<endl<<endl;
	            goto label1;
	        }
			break;	
			
		case 2:
			
			int slc_2;
			label2:
			cout << "\nPress 0 TO EXIT\n";
	        cout << "Press 1 TO INSERT AT START\n";
	        cout << "Press 2 TO INSERT AT SPECIFIC POSITION\n";
	        cout << "Press 3 TO INSERT AT LAST\n";

	        cout<<"PRESS= ";
	        cin >> slc_2;
	        system("cls");
	        if(slc_2==0)
	        break;
	        else if (slc_2 == 1)
	        {	
	        	obj.InsertAtStart();
				goto label2;
	        }
	        else if (slc_2 == 2)
	        {	
	        	obj.InsertAtSpecific();
				goto label2;
	        }
	        else if (slc_2 == 3)
	        {	
	        	obj.insert_last();
				goto label2;
	        }
	        
	        else
	        {
	            cout << "PRESS 0 TO 3 ONLY."<<endl<<endl;
	            goto label2;
	        }
			break;
			
		case 3:
			int slc_3;
			label3:
			cout << "\nPress 0 TO EXIT\n";
	        cout << "Press 1 TO DELETE FIRST\n";
	        cout << "Press 2 TO DELETE OF SPECIFIC POSITION\n";
	        cout << "Press 3 TO DELETE  LAST\n";

	        cout<<"PRESS= ";
	        cin >> slc_3;
	        system("cls");
	        if(slc_3==0)
	        break;
	        else if (slc_3 == 1)
	        {	
	        	obj.delete_start();
				goto label3;
	        }
	        else if (slc_3 == 2)
	        {	
	        	obj.delete_sp();
				goto label3;
	        }
	        else if (slc_3 == 3)
	        {	
	        	obj.delete_last();
				goto label3;
	        }
	        
	        else
	        {
	            cout << "PRESS 0 TO 3 ONLY."<<endl<<endl;
	            goto label3;
	        }
			break;
			
			case 4:
			int slc_4;
			label4:
			cout << "\nPress 0 TO EXIT\n";
	        cout << "Press 1 TO DISPLAY\n";

	        cout<<"PRESS= ";
	        cin >> slc_4;
	        system("cls");
	        if(slc_4==0)
	        break;
	        else if (slc_4 == 1)
	        {	
	        	
				obj.traversing();
				goto label4;
	        }
            
			else
	        {
	            cout << "PRESS 0 TO 1 ONLY."<<endl<<endl;
	            goto label4;
	        }
			break;
			
		default:
			cout<<"PRESS 0 TO 4 ONLY."<<endl;
			goto label;
			
	}
	
	
	}	
	while(slc!=0);
	
		


		
	return(0);
}
