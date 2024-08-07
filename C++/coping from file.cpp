#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

class Student{
	string name,username;
	int pass;
	
	public:
		void getDetails()
		{
			cout<<"Enter Student Name\n";
			cin.ignore();
			getline(cin,name);
			cout<<"Enter username\n";
		getline(cin,username);
			cout<<"Enter Password\n";
			cin>>pass;
		
		ofstream outfile;
		outfile.open("sample.dat");
		outfile<<"Name\t"<<name<<"\nUsername\t"<<username<<"\nPassword\t"<<pass;
		outfile.close();
	}
	
		void copyDetails()
		{
			char all[999];
			ifstream infile;
			infile.open("sample.dat"); 
			infile.seekg(0);
			while(!(infile.eof()))
			{
				infile.getline(all,999);
				
			}
			infile.close();
			
			ofstream out;
			out.open("simple.txt");
			out<<"Data copied from Sample.dat\n"<<all<<endl;
		}
		
		void showDetails()
		{	
			char alll[999];
			ifstream infile;
			infile.open("simple.txt");
			while(!(infile.eof()))
			{
				infile.getline(alll,999);
				cout<<alll<<endl;
			}
			infile.close();
		}
		


};

int main()
{
	Student obj;
	obj.getDetails();
	obj.copyDetails();
	obj.showDetails();
	
	_getch();
	
	return 0;
	
}
