#include<iostream>
#include<string>
#include<windows.h>
#include <cstdlib>
#include<conio.h>
#include<time.h>
using namespace std;
int flag=0,tot1=0,tot2=0,tot3=0,tot4=0,tt1=0,tt2=0,tt3=0,tt4=0;
char key;

class Railway{
	
	public:
		
		string tname;
		Railway()
		{
			tname="none";
		}
		
		void display()
		{
			system("cls");
			cout<<"\n\t\t\t******************************";
			cout<<"\n\t\t\t* Railway Ticket Reservation *";
			system("Color 02");
			cout<<"\n\t\t\t* -------------------------- *";
			cout<<"\n\t\t\t* |                        | *";	
			cout<<"\n\t\t\t* |      1. Admin.         | *";	
			cout<<"\n\t\t\t* |      2. Passenger.     | *";	
			cout<<"\n\t\t\t* |      3. Exit           | *";
			cout<<"\n\t\t\t* |                        | *";
			cout<<"\n\t\t\t* -------------------------- *";	
			cout<<"\n\t\t\t******************************";
			cout<<"\n\n\t\t\t Enter Choice : ";
		 }
};

class Admin : public Railway{
	
	public : 
		int num, t1cost,t2cost,t3cost,t4cost, total;
		string t1,t2,t3,t4;
		
		Admin()
		{
			t1="Islamabad Express";
			t2="Badar Express";
			t3="Bahawalpur Express";
			t4="Allama Iqbal Express";
		}
			
		
		void tt_otal()
		{
			cout<<"\n\t\t\tYour Total Earning Is : ";
			cout<<"\n\t\t\tTrain 1 "<<tot1<<endl;
			cout<<"\t\t\tTrain 2 "<<tot2<<endl;
			cout<<"\t\t\tTrain 3 "<<tot3<<endl;
			cout<<"\t\t\tTrain 4 "<<tot4<<endl;
			cout<<"\n\n\t\tPress Any Key To Continue.";
			cin>>key;			
		}
		
};
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\/
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\/

                      // MUHAMMAD SHOAIB
                                  
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\/
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\/
class Passenger : public Admin {
	
	int tnum,tseat , randomNumber,a1,b1,c1,d1 ;
	
	public : 
	
		void Tdisplay()
		{
			system("cls");
			cout<<"\n\t\t\t 1."<<t1<<endl;
			cout<<"\t\t\t 2."<<t2<<endl;
			cout<<"\t\t\t 3."<<t3<<endl;
			cout<<"\t\t\t 4."<<t4<<endl;
		}
		
		void Booking()
		{
			cout<<"\n\t\t\tEnter Train Number : ";
			t:
			cin>>tnum;
			
			 switch(tnum)
			 {
			 	case 1 : 
			 	{
			 		cout<<"Enter Number Of Seats You want to Book : ";
					cin>>tseat;
					cout<<"Your Seat is \n";
					srand(time(0));
					for (int i = 0; i < tseat; i++)
					{
    						randomNumber = (rand() % 30) + 1;
    						cout << randomNumber << endl;
					}
					
					cout<<"\tDeparture Time : 12:00 AM.";
				 	cout<<"\n\t\tArrival Time   : 05:00 PM.";
				 	tt1=500;
				 	a1=tt1*tseat;
				 	tot1=a1+tot1;
				 	cout<<"\n\n\t\tYour Total Cost is : "<<tot1;
				 	break;
				 }
				 
				 case 2 : 
			 	{
			 		cout<<"Enter Number Of Seats You want to Book : ";
					cin>>tseat;
					cout<<"Your Seat is \n";
					srand(time(0));
					for (int i = 0; i < tseat; i++)
					{
    						randomNumber = (rand() % 30) + 1;
    						cout << randomNumber << endl;
					}
					
					cout<<"\n\t\tDeparture Time : 05:00 AM.";
				 	cout<<"\n\t\tArrival Time   : 07:00 AM.";
				 	tt2=1000;
					 b1=tt2*tseat;
				 	tot2=b1+tot2;
				 	
				 	cout<<"\n\n\t\tYour Total Cost is : "<<tot2;
				 	break;
				 }
				 
				 case 3 : 
			 	{
			 		cout<<"Enter Number Of Seats You want to Book : ";
					cin>>tseat;
					cout<<"Your Seat is \n";
					srand(time(0));
					for (int i = 0; i < tseat; i++)
					{
    						randomNumber = (rand() % 30) + 1;
    						cout << randomNumber << endl;
					}
					
					cout<<"\n\t\tDeparture Time : 08:00 PM.";
				 	cout<<"\n\t\tArrival Time   : 11:00 PM.";
				 	tt3=1500;
				 	c1=tt3*tseat;
				 	tot3=c1+tot3;
				 	cout<<"\n\n\t\tYour Total Cost is : "<<tot3;
					 break;
				 }
				 
				 case 4 : 
			 	{
			 		cout<<"Enter Number Of Seats You want to Book : ";
					cin>>tseat;
					cout<<"Your Seat is \n";
					srand(time(0));
					for (int i = 0; i < tseat; i++)
					{
    						randomNumber = (rand() % 30) + 1;
    						cout << randomNumber << endl;
					}
					
					cout<<"\n\t\tDeparture Time : 03:00 PM.";
				 	cout<<"\n\t\tArrival Time   : 06:00 PM.";
					
					tt4=2000;
				 	d1=tt4*tseat;
				 	tot4=d1+tot4;
				 	
				 	cout<<"\n\n\t\tYour Total Cost is : "<<tot4;
					break;
					 }
					 default :
					 	{
					 		cout<<"Enter Correct Number : ";
					 		goto t;
						 }
			 }
		}
};


void thanks()
{
	
	cout<<"\n\n\t\tThanks FOr Your Booking!!";
}

//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\/
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\/

                      // SHOAIB SARDAR
                                  
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\/
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\/
int main()
{	
int choice,train;
int pass ;

	Railway r1;
	Admin a1;
	Passenger p1;
	do{
	r1.display();
	o:
	cin>>choice;
	
	switch(choice)
	{
		
		case 1:
			{
				
   			cout << "Enter pass\n";
  		    cin>>pass;
   			if(pass == 12345)
			   {
      			cout << "\nAccess granted :P\n";
					do{
				
				system("cls");
				cout<<"\n\t\t\t--------------------------";
				cout<<"\n\t\t\t|                        |";
				cout<<"\n\t\t\t|      1. Check Total.   |";
				cout<<"\n\t\t\t|      2. Main Menu.     |";
				cout<<"\n\t\t\t|                        |";
				cout<<"\n\t\t\t--------------------------";
				cout<<"\n\n\t\t\t Enter Choice : ";
				l:
				cin>>choice;
						
				 if(choice==1)
							{
								a1.tt_otal();	
								train =1;
							}
					else if(choice==2)
							{
								train=1;
							}
					else
						{
							cout<<"\t\t\tEnter Correct Option :";
							goto l;
							}	
							
					
			}while(flag);
			   
					
  			 }	
   			else{
      			cout << "\nAccess aborted...\n";
				}
				
				break;
		//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\/
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\/

                      // MUHAMMAD SHOAIB
                                  
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\/
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\/
		
			}
		
		case 2:
			{
				p1.Tdisplay();
				p1.Booking();
				thanks();
				cout<<"\n\nPress Any Key To continue.";
				cin>>key;
				train=1;
				break;
			}
		
		case 3:
			{
				
				exit(0);
			}
			
			
		default : 
		{
			cout<<"\t\t\t Enter Correct Option : ";
			goto o;
				}		
	}
	}while(train=1);
	return 0;
}

