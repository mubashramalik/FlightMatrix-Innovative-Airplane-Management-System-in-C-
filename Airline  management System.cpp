#include<iostream>
#include<cstring>
#include<fstream>
#include<stdlib.h>
using namespace std;
struct node           //node structure contains information about flight
{
	int data_flight_no;
	string data_name;
	string data_sname;
	int data_a;
	long long int data_phone;
	long long int data_cnic_no;
	int data_ticket_no;
node *next;
};
struct flight{   //information about flight
	int no;
	char src[20];
	char dstn[20];
	char typ[20];
	int prc;
	int ttl_seat;
	int hr;
	int min;
	int a_hr;
	int a_min;
};

struct node1
{

	int data_flight_no;
	char data_source[20];
	char data_destination[20];
	char data_type[20]; 
	int data_price;
	
	int data_seat;
	int data_hh;
	int data_mm;
	int data_a_hh;
	int data_a_mm;
	/*int data_book_seat;*/
	node1 *next;
};
class Person  //class of person contains information about person
{
public:
	int flight_num;
	int ttt;
	int ff;
	int count;
//	int count1;
	node *head, *tail;
	node1* head1, *tail1;
	flight f;
	Person()    //person constructor
	{
		head = NULL;
	tail = NULL;
	head1 = NULL;
	tail1 = NULL;
	}
	void insert_person_data()   //insert person data
	{
		int flight;
	    string name;
	    	string surname;
	    int age;
	    long long int cnic_no;
	    	long long int phone_no;
	    	int ticket;
			cout<<" Please Enter Flight Number for Reservation:   ";
			cin>>flight;
		cout<<" Enter First Name:   ";
		cin>>name;
		
		cout<<" Enter Surname:   ";
		cin>>surname;
			cout<<" Enter Age:   ";
		cin>>age;
		cout<<" Enter CNIC Number:   ";
		cin>>cnic_no;
		cout<<" Enter Phone Number:   +92";
		cin>>phone_no;
		cout<<" Enter Ticket Number:   ";
		cin>>ticket;
		
		node *temp = new node;    //node for person data
		node1 *curr = new node1;
	    curr->data_flight_no = flight;
                    temp->data_flight_no = flight;
		temp->data_name= name;
		temp->data_sname= surname;
			temp->data_a= age;
		temp->data_cnic_no = cnic_no;
			temp->data_phone = phone_no;
		temp->data_ticket_no = ticket;	
		temp->next = NULL;
		if(head==NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
		
	}
		void display_person_information() // display person information stored in node structure
		{

			count = 0;
			node *temp = new node;
			node1 *curr = new node1;
			curr = head1;
			temp = head;
			while( curr != NULL)
			{
				
		
			while( temp!= NULL)
			{
				cout<<endl;
				cout<<"  "<<temp->data_flight_no<<"           "<<temp->data_name<<"         "<<temp->data_sname<<"        "<<temp->data_a<<"        "<<temp->data_cnic_no<<"        +92"<<temp->data_phone<<"      "<<temp->data_ticket_no<<endl;
				
				cout<<endl<<endl;
		
			count++;
		temp = temp->next;
	}
     curr = curr->next;
  
        }
         cout<<"           Total Number of Booked Seats are:   "<<count;
			
	}
		

	void insert_Aeroplane_info()//function to insert aeroplane information
	{
		char source[20];
	    char destination[20];
        int price;
        char type[20];
        int seat;
	    	int h;
	    	int m;
	    	int h1;
	    	int m1;

cout<<" Enter Flight Number:   ";
		cin>>flight_num;
		cout<<" Enter Source Location:   ";
		cin.ignore();
		cin.getline(source, 20) ;
		
		cout<<" Enter Destination location:   ";
		cin.getline(destination, 20) ;
		
		cout<<" Enter Aeroplane type:   ";
		cin.getline(type, 20) ;
		
		cout<<" Enter Ticket Price:    ";
		cin>>price;
		cout<<" Enter total number of seats in the flight:   ";
		cin>>seat;
		cout<<"   Time must be in between (00:00) to (24:00)"<<endl;
		cout<<" Enter Departure time...( hours must be in between 1 to 24 and minutes must be in between 1 to 60)   "<<endl<<endl;
		cout<<" Enter hour:   ";
		cin>>h;
		cout<<" Enter minutes:   ";
		cin>>m;
		cout<<" Enter Arrival time"<<endl;
		cout<<" Enter hours:   ";
		cin>>h1;
		cout<<" Enter minutes:   ";
		cin>>m1;
		
		node1 *temp = new node1;
		temp->data_flight_no = flight_num;
		strncpy(temp->data_source,source,20);
		strncpy(temp->data_destination, destination, 20);
		strncpy(temp->data_type,type,20);
		temp->data_price = price;
		temp->data_seat = seat;
		temp->data_hh = h;
		temp->data_mm = m;
        temp->data_a_hh = h1;
        temp->data_a_mm = m1;
		
		temp->next = NULL;
		if(head1 == NULL)
		{
			head1 = temp;
			tail1 = temp;
			temp = NULL;
		}
		else
		{
			tail1->next = temp;
			tail1 = temp;
		}
		
	}

void display_aeroplane_information() //display aeroplane information stored in node
		{
			node1 *temp = new node1;
			temp = head1;
			while(temp != NULL)
			{
					  
				cout<<"    "<<temp->data_flight_no<<"          "<<temp->data_source<<"     "<<temp->data_destination<<"         "<<temp->data_hh<<":"<<temp->data_mm<<"               "<<temp->data_a_hh<<":"<<temp->data_a_mm<<"           "<<temp->data_type<<"           "<<temp->data_price<<"        "<<temp->data_seat<<"              "<<endl;
				
		temp = temp->next;
		cout<<endl<<endl;
			}
		}
 
 void seat_cancel() //seat cancellation information
    {
    	char st[20] = "Seat is Avaliable";
    	char arr[20];
    	 cout<<" Enter flight Number:  ";
   cin>>ff;
  
    cout<<" Enter Ticket Number to be Cancelled:    ";
    cin>>ttt;
    	ifstream fin;
	fin.open("Admin11.txt", ios::app|ios::binary);
	fin.read((char*)this, sizeof(*this));
	node1 *temp = new node1;
	temp = head1;
	while(!fin.eof())
	{
		while(temp != NULL)
			{
				  
				temp->data_flight_no = f.no;
				strncpy(temp->data_source,f.src,20);
				strncpy(temp->data_destination,f.dstn,20);
				strncpy(temp->data_type,f.typ,20);
				temp->data_price = f.prc; 
				temp->data_seat = f.ttl_seat;
				temp->data_hh = f.hr;
				temp->data_mm = f.min;
				temp->data_a_hh = f.a_hr;
				temp->data_a_mm = f.a_min;
							
		temp = temp->next;
	
		fin.read((char*)this, sizeof(*this));
	}
}

    node *temp11 = new node;
    temp11 = head;
    node1 *curr = new node1;
			curr = head1;
		for(int j=0; j<ff; j++)
			{
				curr = curr->next;
for(int i=1; i<ttt; i++)
			{
				temp11 = temp11->next;
				
			}
	}
		temp11->data_name = strncpy(st,arr,20);
		
    }
 
    
    void display() //display information stored in node
    {
			node *temp = new node;
			temp = head;
			while( temp!= NULL)
			{
			    cout<<"  "<<temp->data_name<<" at Seat Number "<<temp->data_ticket_no<<endl<<endl;
				temp = temp ->next;
			}
		}
		
		
		void finsert() //flight data insertion in node flight
		{
			node1 *temp = new node1;
			temp = head1;
			while(temp != NULL)
			{
				  
				f.no = temp->data_flight_no;
				strncpy(f.src,temp->data_source,20);
				strncpy(f.dstn,temp->data_destination,20);
				strncpy(f.typ,temp->data_type,20);
				f.prc = temp->data_price; 
				f.ttl_seat = temp->data_seat;
				f.hr = temp->data_hh;
				f.min = temp->data_mm;
				f.a_hr = temp->data_a_hh;
				f.a_min = temp->data_a_mm;
				
				if(link()==1)
{
	
	cout<<"   Data Successfully Saved in File ";
	
				}	
							
		temp = temp->next;
		cout<<endl<<endl;
			}
		}	

	int link()
	{
		ofstream fout;
		fout.open("Admin11.txt", ios::app|ios::binary);
		fout.write((char*)this, sizeof(*this));

		fout.close();
		return 1;
		
	}
	
	void show_node()
	{   
	
		cout<<"    "<<f.no<<"                 "<<f.src<<"              "<<f.dstn<<"                "<<f.typ<<"         "<<f.prc<<"                  "<<f.hr<<" : "<<f.min<<"              "<<f.a_hr<<" : "<<f.a_min<<"            "<<f.ttl_seat<<endl;	
		
	}
void node_display()
{
	ifstream fin;
	fin.open("Admin11.txt", ios::app|ios::binary);
	fin.read((char*)this, sizeof(*this));
	while(!fin.eof())
	{
		show_node();
		fin.read((char*)this, sizeof(*this));
	}
}
	void update( ){
				int f_no_update;
	cout<<" Enter flight number whose data you want to update:   ";
	cin>>f_no_update;
		ofstream fout;
		ifstream fin;
		fout.open("temp.txt",ios::out|ios::binary);
		fin.open("Admin11.txt",ios::in|ios::binary);
		 if(!fin)
		 {
		 	cout<<endl<<" file not found ";
		 }
		 else{
	 	fin.read((char *) this, sizeof(*this));
		 	while(!fin.eof())
			 {
			 if(f_no_update!=f.no)
		{
			 	 	
	fout.write((char *) this, sizeof(*this));

			}
			else if( f_no_update == f.no)
			{
				f.no = f_no_update;
				cout<<"  Enter source to be Updated :     ";
				cin.ignore();
				cin.getline(f.src, 20);
				
				
				fout.write((char * )this,sizeof(*this) );	
			}
			
		fin.read((char *) this, sizeof(*this));
			
			
}
	fin.close();
	fout.close();
	remove("Admin11.txt");
	rename("temp.txt","Admin11.txt");	 
	}
	}	

////del

	void f_del( ){
				int f_no_update;
	cout<<" Enter flight number whose data you want to delete:   ";
	cin>>f_no_update;
		ofstream fout;
		ifstream fin;
		fout.open("temp.txt",ios::out|ios::binary);
		fin.open("Admin11.txt",ios::in|ios::binary);
		 if(!fin)
		 {
		 	cout<<endl<<" file not found ";
		 }
		 else{
	 	fin.read((char *) this, sizeof(*this));
		 	while(!fin.eof())
			 {
			 if(f_no_update!=f.no)
		{
			 	 
		fout.write((char *) this, sizeof(*this));
			}
		
			fin.read((char *) this, sizeof(*this));	
}
	fin.close();
	fout.close();
	remove("Admin11.txt");
	rename("temp.txt","Admin11.txt");	 
	}
	}	


};
			int main()
			{
				Person p;
				int n, a, ab, x;
		do
				{
				cout<<"............................................................................................."<<endl;
				cout<<"                  MAIN MENU"<<endl;
				cout<<"............................................................................................."<<endl<<endl;
				cout<<"   Press 1 for ADMIN CONTROL"<<endl;
				cout<<"   Press 2 to Enter Passengers Data"<<endl;
				cout<<"   Press 3 to Get Passengers Information "<<endl;
				cout<<"   Press 4 to cancel booking"<<endl;
				cout<<"   Press 5 to display a Reservation list"<<endl;
				cout<<"   Press 6 to EXIT Program"<<endl<<endl;
				cout<<"  Enter your option :     ";
				cin>>a;
				system("cls");
				switch(a)
				{
					case 1:
							for(int i=0; i<8; i++)
			{
			
			cout<<endl<<endl<<"...................................................................................."<<endl;
			cout<<"                            ADMIN ";
			cout<<endl<<endl<<"...................................................................................."<<endl<<endl;
			cout<<endl;
			cout<<"                             MAIN MENU"<<endl<<endl;
				cout<<"   Press 1 to ADD Flights"<<endl;
				cout<<"   Press 2 to DISPLAY Flight Details"<<endl;
				cout<<"   Press 3 to Save Data in File"<<endl;
				cout<<"   Press 4 to Display Data from File"<<endl;
				cout<<"   Press 5 to UPDATE Flight Source"<<endl;
				cout<<"   Press 6 to display Updated Data from File "<<endl;
				cout<<"   Press 7 to DELETE Flight"<<endl;
				cout<<"   Press 8 to Display Data from file after Flight Deletion"<<endl;
			cin>>x;
			if(x == 1)
			{
				cout<<" How many Flights you want to enter:   ";
				    cin>>ab;
				    for(int i=0; i<ab; i++)
				    {
				    	cout<<"....................................................................................................................."<<endl;
					cout<<"  Enter Flight information of flight "<<i+1<<" "<<endl;
				cout<<"............................................................................................................................."<<endl;
				p.insert_Aeroplane_info();
				cout<<endl<<"   Flight "<<p.flight_num<<"  is SUCCESFULLY Added!!"<<endl;
				    }
				    
			}
			if(x == 2)
			{
					 
				    cout<<"........................................................................................................................................."<<endl;
				    cout<<"     Flight Detail"<<endl;
				    cout<<"........................................................................................................................................."<<endl;
				    cout<<" Flight Number  source     Destination   Departure time    Arrival time          Type         Price     Total Seats      "<<endl;
			
					p.display_aeroplane_information();		    
				}
				
				if(x == 3)
				{
					cout<<endl<<"    !!!!!!!!!!!!!!!!!!ADDING DATA IN FILE"<<endl;
					cout<<"................................................................................................................................................................."<<endl;
	
				p.finsert();	
				}
			if(x == 4)
			{
				cout<<"            DISPLAYING ADDED DATA FROM FILE"<<endl;
				cout<<"......................................................................................................................................................................"<<endl<<endl;
				
					cout<<"Flight Number   Source Location          Destination Location     Flight Type     Ticket Price         Departure time      Arrival Time        Total Seats"<<endl<<endl;
				p.node_display();
			}
			
			if(x == 5)
			{
				cout<<"      !!!!!!!!!!!!!!!!!!!!!!!UPDATING DATA OF FLIGHT "<<endl;
				cout<<"....................................................................................................................................................................."<<endl<<endl;
				p.update();
			}
			if(x == 6)
			{
				cout<<"             DIDPLAYING UPDATED DATA FROM FILE"<<endl;
				cout<<"......................................................................................................................................................................"<<endl<<endl;
				
					cout<<"Flight Number   Source Location          Destination Location     Flight Type     Ticket Price         Departure time      Arrival Time        Total Seats"<<endl<<endl;
				p.node_display();
			}
			if(x == 7)
			{
				cout<<"    !!!!!!!!!!!!!!!!!!!!!!!!!!!DELETING FLIGHT"<<endl;
				cout<<".............................................................................................................................................................."<<endl<<endl;
				p.f_del();
			}
			if(x == 8)
			{
				cout<<"                 DISPLAYING DATA FROM FILE"<<endl;
				cout<<"......................................................................................................................................................................"<<endl<<endl;
				
					cout<<"Flight Number   Source Location          Destination Location     Flight Type     Ticket Price         Departure time      Arrival Time        Total Seats"<<endl<<endl;
				p.node_display();
			}
			}
			break;
				 
				case 2:
				
				
				cout<<"  Enter total Number of Passengers to be entered:   ";
				cin>>n;
				for( int i=0; i<n; i++)
				{
				cout<<"................................................................................................................"<<endl;
					cout<<"  Enter Personal information of customer  "<<i+1<<"  "<<endl;
				cout<<"................................................................................................................."<<endl;
				p.insert_person_data();
				cout<<"   Passenger data is Sucessfully Added!!"<<endl;
				}
			
				break;
				
		case 3:
				
					cout<<"................................................................................................................"<<endl;
				cout<<"                    PASSENGER PERSONAL DATA"<<endl;
				    cout<<"................................................................................................................."<<endl;
		cout<<endl;
			    cout<<"  Flight Number     First Name    Surname     Age         CNIC Number     Mobile Number    Ticket Number        "<<endl;
			
				p.display_person_information();
					
		cout<<endl;
				
				break;
				
				case 4:
				    p.seat_cancel();
				    cout<<".................................................................."<<endl;
				    cout<<"  Reservation is Cancelled Successfully at seat "<<p.ttt<<"  !!!"<<endl;
				    cout<<".................................................................."<<endl;
				break;
				
				case 5:
					
					cout<<"..................................................................."<<endl;
					cout<<"               RESERVATION LIST"<<endl;
					cout<<"...................................................................."<<endl<<endl;
				    p.display();
				break;
				case 6:
					cout<<endl<<endl<<endl<<"              !!!END OF PROGRAM!!!"<<endl<<endl;
					break;
					dafault:
						cout<<endl<<endl<<endl<<"                 ! Invalid Entry !"<<endl<<endl;
				}
			}
				while(a>=1||a<=6);
				system("pause");
			}


