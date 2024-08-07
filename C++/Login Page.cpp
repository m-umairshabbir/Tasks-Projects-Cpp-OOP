#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void login();
void registr();
void forgot();
void loginMenu();
int main()
{
	loginMenu();
	
	
	return 0;
	
}
void loginMenu(){
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
				login();
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

void registr()
{
	string reguser,regpass;
	system("cls");
	cout<<"Enter the Username :";
	cin>>reguser;
	cout<<"Enter the Password :";	
	cin>>regpass;
	ofstream outfile;
	outfile.open("loginInfo.txt",ios::app);
	outfile<<reguser<<' '<<regpass<<endl;
	outfile.close();
	cout<<"Registration Successfull !\n";
	loginMenu();
	
}

void login()
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
				cin.get();
				cin.get();
				
				loginMenu();
			//calll the menu function of my Project;
		}
		else
		{
			cout<<"___Invalid Username/Password !\n";
			cin.get();
			loginMenu();
			
		}
		
	}
	
}
void forgot(){
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
		cin.get();
		cin.get();
		system("cls");
		loginMenu();
	}
	else 
	{
		system("cls");
		cout<<"\n\n\t------------------------------\n\n	Sorry Invalid  Cridentials !!!\n\n\t------------------------------\n";
		cin.get();
		cin.get();
		loginMenu();
	}
	
}
