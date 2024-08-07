#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>
#include <string>

//using namespace std;

void menu();//main menu function prototype


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
	std::cout <<"\n\n\t\t************************Login Menu**************************\n\n\n";
	std::cout<<"\t||1.Login    :";
	std::cout<<"\n\t||2.Register :";
	std::cout<<"\n\t||3.Forgot   :";
	std::cout<<"\n\n\tEnter Your Choice :";
	std::cin>>choice;
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
				std::cout<<"Invalid Choice !\n";
				system("cls");
				loginMenu();
				
			}		
	}	
}
void Login::registr()
{
	std::string reguser,regpass;
	system("cls");
	std::cout<<"Enter the Username :";
	std::cin>>reguser;
	std::cout<<"Enter the Password :";	
	std::cin>>regpass;
	std::ofstream outfile;
	outfile.open("loginInfo.txt");
	outfile<<reguser<<' '<<regpass<<std::endl;
	outfile.close();
	std::cout<<"Registration Successfull !\n";
	loginMenu();
}
void Login::login1()
{
	system("cls");
	std::cout<<"----------It's a login Page----------\n\n";
	std::string user,pass,u,p;
	std::cout<<"    Enter the Username : ";
	std::cin>>user;
	std::cout<<"    Enter the Password : ";
	std::cin>>pass;
	std::ifstream infile;
	infile.open("loginInfo.txt");
	while(infile>>u>>p)
	{
		if(user==u	&&	pass==p)
		{
			std::cout<<"\n\n*****Login Successfull*****"<<std::endl;
				_getch();
				
				menu();//Entery to the project
			}
		else
		{
			std::cout<<"___Invalid Username/Password !\n";
			_getch();
			loginMenu();
		}
	}
}
void Login:: forgot(){
	std::string cho;
	std::string hint="coding";
	system("cls");
	std::cout<<"----------Hint Question----------\n";
	std::cout<<"\n\n";
	std::cout<<"What is your favourite Hobby : || ";
	std::cin>>cho;
	if(cho==hint)
	{
		std::string us ,ps;
		std::ifstream infile;
		infile.open("loginInfo.txt");
		infile>>us>>ps;
		std::cout<<"\n\n\t--------------------\n	Note your Details !!!\n\n\t--------------------\n";
		std::cout<<"	Username : "<<us<<std::endl;
		std::cout<<"	Password : "<<ps<<std::endl;
		infile.close();
	_getch();
		system("cls");
		loginMenu();
	}
	else 
	{
		system("cls");
		std::cout<<"\n\n\t------------------------------\n\n	Sorry Invalid  Cridentials !!!\n\n\t------------------------------\n";
	_getch();
		loginMenu();
	}
}
class Customer
{
protected:
	  static int cusID;
    std::string name, gender, address;
    long long int mobileNo;
    int age,menuBack;
    char all[999];
  
public:
    Customer ()
    {
    	name=gender=address="\0";
		age=mobileNo=menuBack=0;	
	}
	void getDetails();
    void showDetails();
    
    ~Customer()
    {	
	}
};
int Customer::cusID=0;
void Customer::getDetails() 
    {
        std::ofstream out("old-customers.txt", std::ios::app); //open file using append mode to write customer details
        {
            
            std::cout << "Enter Name: ";
            std::cin.ignore();
            
            getline (std::cin,name);
            std::cout << "Address: ";
            
           
            getline (std::cin,address);
            std::cout << "Gender: ";
            
            getline (std::cin,gender);
            std::cout << "Enter Age: ";
            
            std::cin>>age;
    	contact:
    		std::cout << "Enter Contact No(9639xxxxxx): ";
    		std::cin >> mobileNo;
    		if (mobileNo < 1000000000 || mobileNo > 9999999999)
    			{
        			std::cout << "\t\t\t Please Enter Only 10 Digits...\n" ;
        			goto contact;
    			}
            
			++cusID;
        }
        out << "\nCustomer ID: " << cusID << "\nName: " << name  << "\nAddress: " << address << "\nGender: " << gender << "\nAge: " << age << "\nMobile Number: " << mobileNo<< std::endl;
        out.close();
        std::cout << "\nSaved \nNOTE: We save your details record for future purposes.\n" << std::endl;
    }
void Customer::showDetails() //function to show old customer records
    {
        std::ifstream in("old-customers.txt");
        {
            if(!in)
            {
                std::cout << "File Error!" << std::endl;
            }
            while(!(in.eof()))
            {
                in.getline(all, 999);
                std::cout << all << std::endl;
            }
            in.close();
        }
    }

class Cabs
{
protected:
	int choice;
    int cabChoice;
    static float kilometers;
    float cabCost;
    static float lastCabCost;
public:	
	Cabs()
	{
		choice=cabChoice=0;
		cabCost=0.0;
	}
	void cabDetails();
	
     ~Cabs()
     {
	 }
};
void Cabs::cabDetails()
    {
    	startBook:
    	system("cls");
        //cout << "We collaborated with fastest, safest, and smartest cab service arround the country" << endl;
        std::cout << "\t\t\t-----------The Creator's Cabs-----------\n" << std::endl;
        std::cout << "\t\t1| Book a Standard Cab Rs 150\\Km" << std::endl;
        std::cout << "\t\t2| Book a Luxury Cab   Rs 200\\Km" <<std:: endl;
        //cout<<"\t\t\t3||Book a Cab\n";
        //cout<<"\t\t\t4||Journey Charges\n";
        std::cout<<"\t\tEnter Choice: ";
        std::cin>>choice;
        
        switch(choice)
        {
        	case 1:
        		{
        			system("cls");
        			std::cout<<"\n\t\tEnter Kilometers of Journey:";
        			std::cin>>kilometers;
        			 cabCost = kilometers * 150;
        			 lastCabCost = cabCost;
        			std::cout << "\n*****You have successfully Booked STANDARD Cab*****" << std::endl;
        			_getch();
        			std::cout << "\n\t\t\t||Your Tour will cost " << cabCost << " \\Rs ||" << std::endl;
        				std::cout << "\n\t\t\t||Goto Menu to take the receipt||" <<std:: endl;
        			_getch();
        			system("cls");
        			std::cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t||We Have also Collaborated with Few Hotels For Your Comfort of Stay ||";
        	
					std::cout<<"\n\n\n\t\t\t\t\t||Visit our Collaboration Service to avail offer||";
                	
        			_getch();
        			break;
        			
				}
			case 2:
				{
					system("cls");
        			std::cout<<"\n\t\tEnter Kilometers of Journey:";
        			std::cin>>kilometers;
        			 cabCost = kilometers * 200;
        			 lastCabCost = cabCost;
        			std::cout << "\n\t\t\t*****You have successfully Booked LUXURY Cab*****" << std::endl;
        			_getch();
        			std::cout << "\n\t\t\t||Your Tour will cost " << cabCost << " \\Rs ||" << std::endl;
                	std::cout << "\n\t\t\t||Goto Menu to take the receipt||" <<std:: endl;
        			_getch();
        			system("cls");
        			std::cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t||We Have also Collaborated with Few Hotels For Your Comfort of Stay ||";
        			std::cout<<"\n\n\n\t\t\t\t\t||Visit our Collaboration Service to avail offer||";
        			
					_getch();
					break;	
				}
			default:
				{
					std::cout<<"Ivalid Input !"<<std::endl;
				}
				_getch();
				goto startBook;
		}

     }

float Cabs::lastCabCost=0.0;
float Cabs::kilometers=0.0;


class Booking
{
protected:
    int choiceHotel;
    int packChoice1;
    int gotoMenu;
    static float hotelCost;
public:
	Booking()
	{
		choiceHotel=0;
		packChoice1=0;
	}
    void hotels();
    
    ~Booking()
    {
    	
	}
};
float Booking::hotelCost=0.0;
void Booking::hotels()
    {
    	hotel:
        std::string hotelNo[] = {"SERENA", "Shelton Rezidor Sawat", "Ramada"};
        for(int a = 0; a < 3; a++)
        {
            std::cout << (a+1) <<". Hotel " << hotelNo[a] << std::endl;
        }
        std::cout << "\n\t\t\tCurrently we collaborated with above hotels!\n\n" << std::endl;
		std::cout << "Enter choice to see Details or to Book ";
        std::cin >> choiceHotel;
		system("CLS");
	    if(choiceHotel == 1){
            std::cout << "-------WELCOME TO HOTEL SERENA-------\n" << std::endl;
			std::cout << "Packages offered by SERENA:\n" <<std:: endl;
		    std::cout << "==1. Standard Pack" << std::endl;
            std::cout << "\tAll basic facilities you need just for: Rs.5000.00" << std::endl;
            std::cout << "==2. Premium Pack" << std::endl;
            std::cout << "\tEnjoy Premium: Rs.10000.00" <<std:: endl;
            std::cout << "==3. Luxury Pack" << std::endl;
            std::cout << "\tLive a Luxury at SERENA: Rs.15000.00" <<std:: endl;
			std::cout << "Enter Choice\\Go Back: ";
            std::cin >> packChoice1;
			if (packChoice1 == 1){
                hotelCost = 5000.00;
                std::cout << "\nYou have successfully booked Standard Pack at SERENA" << std::endl;
                std::cout << "\t==Goto Menu and take the receipt==" << std::endl;
                _getch();
            }
            else if (packChoice1 == 2){
                hotelCost = 10000.00;
                std::cout << "\nYou have successfully booked Premium Pack at SERENA" << std::endl;
                std::cout << "\t==Goto Menu and take the receipt==" << std::endl;
            	_getch();
			}
            else if (packChoice1 == 3){
                hotelCost = 15000.00;
                std::cout << "\nYou have successfully booked Luxury Pack at SERENA" << std::endl;
                std::cout << "\t==Goto Menu to take the receipt==" << std::endl;
            _getch();
			}
            else{
                std::cout << "Invalid Input! " << std::endl;
                _getch();
                system("CLS");
                goto hotel;
            }
	}
        else if(choiceHotel == 2){
            std::cout << "-------WELCOME TO HOTEL Shelton Rezidor Sawat-------\n" <<std:: endl;
			std::cout << "Packages Offered by Shelton Rezidor Sawat:\n" << std::endl;
            std::cout << "=1. Family Pack" <<std:: endl;
            std::cout << "\t Rs.15000.00 for a day" << std::endl;
            std::cout << "=2. Couple Pack" << std::endl;
            std::cout << "\t Rs.10000.00 for a day" << std::endl;
            std::cout << "=3. Single Pack" << std::endl;
            std::cout << "\t 5000.00 for a day" <<std:: endl;
			std::cout << "Enter Choice\\Go Back: ";
            std::cin >> packChoice1;
			if (packChoice1 == 1){
                hotelCost = 15000.00;
                std::cout << "You have successfully booked Family Pack at Shelton Rezidor Sawat" << std::endl;
                std::cout << "\t==Goto Menu and take the receipt==" << std::endl;
            _getch();
			}
            else if (packChoice1 == 2){
                hotelCost = 10000.00;
                std::cout << "You have successfully booked Couple Pack at Shelton Rezidor Sawat" <<std:: endl;
                std::cout << "\t==Goto Menu and take the receipt==" << std::endl;
            _getch();
			}
            else if (packChoice1 == 3){
                hotelCost = 5000.00;
                std::cout << "You have successfully booked Single Pack at Shelton Rezidor Sawat\n" ;
                std::cout << "\t==Goto Menu and take the receipt==\n" ;
            _getch();
			}
            else{
                std::cout << "Invalid Input! !\n" ;
                
                system("CLS");
                _getch();
                goto hotel;
            }
    	}
        else if(choiceHotel == 3){
            std::cout << "-------WELCOME TO HOTEL RAMADA-------\n\n\n" ;
            std::cout << "Set in tropical gardens on the banks of the Sea\n" ;
           std:: cout << "Amazing offer in this summer: Rs.5000.00 for a one day!!!\n";
			std::cout<<"\t1.||Here You Have only Special Pack \n";
            std::cout << "Enter Choice\\Go Back: ";
            std::cin >> packChoice1;
		  if (packChoice1 == 1){
                hotelCost = 5000.00;
                system("cls");
                std::cout << "You have successfully booked Ramada's Special Pack\n" ;
                std::cout << "\t==Goto Menu and take the receipt==\n" ;
                _getch();
            }
            else{
                std::cout << "Invalid Input! \n" ;
               _getch();
                system("CLS");
                goto hotel;
            }
        }
        else{
            std::cout << "Invalid Input! \n" ;
            
            system("CLS");
            _getch();
            menu();
        }
    }
class Charges : public Booking, Cabs, Customer //Multiple Inheritance of some other classes to Chargers
{
public:
	Charges()
	{
		
	}
    void printBill();
   
	void showBill();

    ~Charges()
    {
    	
	}
};
 void Charges::printBill()
    {
        std::ofstream outf("receipt.txt"); //receipt for bought items
        {
            outf << "--------The Creator's Travel Agency--------\n" ;
            outf << "---------------Receipt-------------\n" ;
            outf << "_________________________________\n";
			outf << "Customer ID: " << Customer::cusID ;
            outf << "\n\nDescription\t\t Total" ;
            outf << "\nHotel cost:\t\t " << std::fixed << std::setprecision(2) << Booking::hotelCost ;
            outf << "\nTravel (cab) cost:\t " << std::fixed << std::setprecision(2) << Cabs::lastCabCost ;
            outf << "_________________________________\n" ;
            outf << "Total Charge:\t\t " << std::fixed << std::setprecision(2) << Booking::hotelCost+Cabs::lastCabCost ;
            outf << "\n_________________________________\n" ;
            outf << "------------THANK YOU------------\n" ;
        }
        outf.close();
    }
void Charges::showBill()
    {
        std::ifstream inf("receipt.txt");
        {
            if(!inf)
            {
                std::cout << "File Error!\n" ;
            }
            while(!(inf.eof()))
            {
                inf.getline(all, 999);
                std::cout << all << std::endl;
            }
        }
        inf.close();
    }
void menu()
{
	int mainChoice;
    int inChoice;
    int receipt;
startMenu:
	system("cls");
	std::cout << "				      * The Creators Travels *\n\n" ;
    std::cout << "		-------------------------Main Menu--------------------------\n" ;
	std::cout << "		 _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n";
    std::cout << "\t|\t\t\t\t\t|\n";
  	std::cout << "\t		|\tCustomer Entery 	    	-> 1|\n" ;
    std::cout << "\t		|\tCabs Booking    	    	-> 2|\n" ;
    std::cout << "\t		|\tCollaboration Service 	 	-> 3|\n" ;
    std::cout << "\t		|\tCharges & Bill      	 	-> 4|\n" ;
    std::cout << "\t		|\tExit.....      		        -> 5|\n" ;
    std::cout << "\t|\t\t\t\t\t|\n" ;
    std::cout << "		_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 	\n" ;
    std::cout << "\nEnter Choice: ";
    std::cin >> mainChoice;
   system("CLS");
   
	Customer a2; //creating objects
    Cabs a3;
    Booking a4;
    Charges a5;
    switch(mainChoice)
    {
    	case 1:
    		{
    		std::cout << "------Customers------\n" ;
        	std::cout << "1. Enter New Customer\n";
        	std::cout << "2. See Old Customers\n";
			std::cout << "\nEnter choice: ";
        	std::cin >> inChoice;
			system("cls");
			switch(inChoice)
				{
				case 1:
					{
						a2.getDetails();
						_getch();
						break;
					}
				case 2:
					{
						a2.showDetails();
						_getch();
						break;
					}
				default:
					{
						std::cout<<"Invalid Input !\n";
						_getch();
					}
				}
				goto startMenu;
				break;
			}
		case 2:
			{
			a3.cabDetails();
			goto startMenu;	
			break;
			}
		case 3:
			{
			std::cout << "--> Book a Luxury Hotel using the System <--\n" ;
        	a4.hotels();
			goto startMenu;	
			break;	
			}
		case 4:
			{
			std::cout << "-->Get your receipt<--\n" ;
        	a5.printBill();
        	std::cout<<"1=> Print Receipt\n";
        	std::cin>>receipt;
        	switch(receipt)
        	{
        		case 1:
        			{
        				system("CLS");
            			a5.showBill();
            			_getch();	
            			break;	
					}
					default:
					{
						std::cout<<"Invalid Input !\n";		
					}
        	}
			goto startMenu;	
			break;
			}
		case 5:
			{	
				std::cout << "\n\n\t--GOOD-BYE!--" ;
				break;
			}
		default:
				{
					std::cout<<"Invalid Input !";
					_getch();
					break;
				}
	goto startMenu;
	}
}
int main()
{
	Login obj1;
	obj1.loginMenu();
    return 0;
}

