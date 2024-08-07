#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char data[100];



	ofstream outfile;
	
	outfile.open("sample-file.txt",ios::app);
	cout << "\nEnter The Data You Want to ::";
	cin.getline(data, 100);
	outfile << data << endl;
	outfile.close();
	
	ifstream infile;
	
	infile.open("sample-file.txt");
  while(infile.eof()==0)
            {
                infile.getline(data, 100);
                cout << data << endl;
            }
            infile.close();
	return 0;
}
