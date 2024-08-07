#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include<iomanip>
#include<windows.h>
using namespace std;

class MainMenu{
	int mOption;
	
	public:
		MainMenu()
		{
			mOption=0;
		}
	void menu()
	{
		 cout << "\t|\t\t\t\t\t|" << endl;
    //cout << "\t|\tAgency System Management -> 0" << endl;
    cout << "\t|\tCustomer Management -> 1\t|" << endl;
    cout << "\t|\tCabs Management     -> 2\t|" << endl;
    cout << "\t|\tBookings Management -> 3\t|" << endl;
    cout << "\t|\tCharges & Bill      -> 4\t|" << endl;
    cout << "\t|\tExit                -> 5\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;

    cout << "\nEnter Choice: ";
	}
	
	
}; 


int main()
{
	
	
	MainMenu obj;
	obj.menu();
	return 0;
}

