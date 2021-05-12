#include<iostream>
using namespace std;
class management{
	private:
		string name;
		string address;
		string phone_no;
		int room_no;
		static int count;
	public:
		void menu();
		void book_rooms(){
			
			cout<<"ENTTER ROOM NUMBER::>> \n";
			cin>> room_no;
			bool flag=room_status(room_no);
			if(flag==false){
				cout<<"THE ROOM IS ALREADY BOOKED..!!";
				
			}
			else{
				count++;
				cout<<"ENTER YOUR NAME::>> \n";
				cin.ignore();
				getline(cin,name);
				cout<<"ENTER YOUR ADDRESS::> \n";
				cin.ignore();
				getline(cin,address);
				cout<<"ENTER YOUR PHONE NUMBER::> \n";
				cin.ignore();
				getline(cin,phone_no);
			}
		}
		void customer_record(){
			cout<<"ROOM NUMBER >> "<<room_no<<endl;
			cout<<"YOUR NAME >> "<<name<<endl;
			cout<<"YOUR ADDRESS >>"<<address<<endl;
			cout<<"YOUR PHONE NUMBER >>"<<phone_no<<endl;	
		}
		int roomno(){
			return room_no;
		}
		bool room_status(int room){
			management h;
			if(h.roomno()==room){
				return false;
		    }
			else
				return true;
				
		}
		void room_alloted(){
			cout<<"TOTAL BOOKED ROOMS "<<count;
		}
		void edit_records(){
			int nw_room;
			int flag=0;
			management h;
			cout<< "ENTER ROOM NO\n";
			cin>>nw_room;
			if(h.roomno()==nw_room){
				flag=1;
				room_no = nw_room;
				cout<<"ENTER YOUR NAME::>> \n";
				cin.ignore();
				getline(cin,name);
				cout<"ENTER YOUR ADDRESS::> \n";
				cin.ignore();
				getline(cin,address);
				cout<<"ENTER YOUR PHONE NUMBER::> \n";
				cin.ignore();
				getline(cin,phone_no);		
			}
			if(flag==0){
				cout<<"ROOM UNAVAILABLE";
			}
			else
			cout<<"available";
		}
		void delete_records(){
			room_no=0;
			name.clear();
			address.clear();
			phone_no.clear();
		}
};
int management::count=0;
main(){
{
	int n,i;
	cout<<"enter no of rooms";
	cin>>n;
    int choice;
    management h[100];
    for(i=0;i<=n;i++){
	
    while(1)
    {
        cout<<"\n"" MAIN MENU """;
        cout<<"\n\t1.Book A Room";
        cout<<"\n\t2.Customer Record";
        cout<<"\n\t3.Edit Record";
        cout<<"\n\t4.delete Rooms ";
        //cout<<"\n\t5 No of rooms allocated";
        cout<<"\n\t6.Exit";
        cout<<"\n\n\tEnter Your Choice: ";
        cin>>choice;
        
        switch(choice)
        {
            case 1: 
                h[i].book_rooms();
                break;
            case 2: 
                h[i].customer_record();
                break;
            case 3: 
            	cout<<"modify room\n";
              	 h[i].edit_records();
                break;
            case 4:
				cout<<"delete room\n";
               	h[i].delete_records();
                break;
            //case 5:
            //	h.room_alloted();
			 //   break;
			case 6:
				exit(0);
            default:
                    {
                        cout<<"\n\n\t\t\tWrong choice!!!";
                        cout<<"\n\t\t\tPress any key to continue!!";
                    }
        }
    }
}
}
}
