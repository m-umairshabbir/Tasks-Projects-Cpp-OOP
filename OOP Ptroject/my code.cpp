#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include <windows.h>
#include <string>

using namespace std;

void mainMenu();
class CustomerManagement
{
	
	string name,gender,address;
	int age , mobileNo ,menuBack;
	static int customerId;
	
	public:
		
		CustomerManagement()
		{
			
			name=gender=address="\0";
			age=mobileNo=menuBack=0;
		}
		
		void getDetails();
		void showDetails();
		
};
int CustomerManagement::customerId=0;

int main()
{
	mainMenu();
	CustomerManagement o;
	//o.getDetails();
	//o.getDetails();
	o.showDetails();
	return 0;
}


void mainMenu()
	{
		cout << "				        * The Creators Travels *\n" << endl;
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

		
		}
		

void CustomerManagement::getDetails(){
	 
	 	cout<<"\n Enter Customer Name  : ";
	 	
	 	getline(cin,name);
	 	
		cout<<"\n Enter Customer Address  : ";
	 	getline(cin,address);

	 	cout<<"\n Enter Customer Gender  : ";
	 	getline(cin,gender);
	 	
		cout<<"\n Enter Customer Age  : ";
	 	cin>>age;

	 	cout<<"\n Enter Customer Mobile No  : ";
	 	cin>>mobileNo;
	 	
	 ofstream out;
	 out.open("showDetails.txt",ios::app);
	
	 out<<"\n---------------------------------\n---------------------------------"<<"\n||  Custommer ID     ||   "<<++customerId << "\n||  Name             || "<<name<<"\n||  Age              || "<<age<<"\n||  Address          || "<<address<<"\n||  Gender           || "<<gender<<"\n||  Mobile No        || "<<mobileNo<<"\n---------------------------------\n---------------------------------\n\n";
	 out.close();
	 
	 cout<<"\n Your Info Has Been  Saved In Record for Later use";
}

void CustomerManagement::showDetails()
{
	string st;
	
	ifstream in;
	in.open("showDetails.txt");
	while (!in.eof()==0){
	
	getline (in,st);
	cout<<st;
	cout<<endl;
}
	in.close();
	
}
