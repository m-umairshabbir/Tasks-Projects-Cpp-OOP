#include<iostream>
#include<fstream>
#include<iomanip>
#include <conio.h>

class Login
{
	public:
		Login()
		{
			  system("color F0"); //change terminal color
        
//	  0 = Black       8 = Gray
//    1 = Blue        9 = Light Blue
//    2 = Green       A = Light Green
//    3 = Aqua        B = Light Aqua
//    4 = Red         C = Light Red
//    5 = Purple      D = Light Purple
//    6 = Yellow      E = Light Yellow
//    7 = White       F = Bright White
		}
		void login1();
		void registr();
		void forgot();
		void loginMenu();
		
		~Login()
		{
			
		}
};


void Login::loginMenu(){
	system("cls");
	int choice;
	cout <<"\n\n\t\t************************Login Menu**************************\n\n\n";
	cout<<"\t||1.Login    :";
	cout<<"\n\t||2.Register :";
	cout<<"\n\t||3.Forgot   :";
	cout<<"\n\n\tEnter Your Choice :";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				login1();
				break;
			}
		case 2:
			{
				registr();
				break;
			}
		case 3:
			{
				forgot();
				break;
			}
		default:
			{
				cout<<"Invalid Choice !\n";
				system("cls");
				loginMenu();
				
			}
			
			
			
			
	}
	
}

void Login::registr()
{
	string reguser,regpass;
	system("cls");
	cout<<"Enter the Username :";
	cin>>reguser;
	cout<<"Enter the Password :";	
	cin>>regpass;
	ofstream outfile;
	outfile.open("loginInfo.txt");
	outfile<<reguser<<' '<<regpass<<endl;
	outfile.close();
	cout<<"Registration Successfull !\n";
	loginMenu();
	
}

void Login::login1()
{
	system("cls");
	cout<<"----------It's a login Page----------\n\n";
	string user,pass,u,p;
	cout<<"    Enter the Username : ";
	cin>>user;
	cout<<"    Enter the Password : ";
	cin>>pass;
	ifstream infile;
	infile.open("loginInfo.txt");
	while(infile>>u>>p)
	{
		if(user==u	&&	pass==p)
		{
			cout<<"\n\n*****Login Successfull*****"<<endl;
				_getch();
				
				menu();
			//calll the menu function of my Project;
		}
		else
		{
			cout<<"___Invalid Username/Password !\n";
			_getch();
			loginMenu();
			
		}
		
	}
	
}
void Login:: forgot(){
	string cho;
	string hint="coding";
	system("cls");
	cout<<"----------Hint Question----------\n";
	cout<<"\n\n";
	cout<<"What is your favourite Hobby : || ";
	cin>>cho;
	if(cho==hint)
	{
		string us ,ps;
		ifstream infile;
		infile.open("loginInfo.txt");
		infile>>us>>ps;
		cout<<"\n\n\t--------------------\n	Note your Details !!!\n\n\t--------------------\n";
		cout<<"	Username : "<<us<<endl;
		cout<<"	Password : "<<ps<<endl;
		infile.close();
	_getch();
		system("cls");
		loginMenu();
	}
	else 
	{
		system("cls");
		cout<<"\n\n\t------------------------------\n\n	Sorry Invalid  Cridentials !!!\n\n\t------------------------------\n";
	_getch();
		loginMenu();
	}
	
}





class ManageMenu
{
public:
    ManageMenu(){ }
    void menu();
	~ManageMenu(){} 
};

void menu() //menu function contain main menu
{
m:
	system("cls");
	cout << "				      * The Creators Travels *\n" << endl;
    cout << "		-------------------------Main Menu--------------------------" << endl;

    cout << "		 _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
  
    cout << "\t		|\tCustomer Management -> 1\t|" << endl;
    cout << "\t		|\tCabs Management     -> 2\t|" << endl;
    cout << "\t		|\tBookings Management -> 3\t|" << endl;
    cout << "\t		|\tCharges & Bill      -> 4\t|" << endl;
    cout << "\t		|\tExit                -> 5\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "		_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 	" << endl;

	




int main()//Main Function
{
	Login obj1;
	obj1.loginMenu();
    
  
    return 0;
}
