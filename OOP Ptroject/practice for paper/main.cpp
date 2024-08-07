/*
/*Author: Zeeshan Shabir
Date Modified: 12-June-2022 

To Run this File:
> g++ main.cpp -o ./main.out
> ./main.out 
*/

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char data[100];
    int choice;
    // open a file in write mode.
    // cout<<"Please Enter 1 if you want to read the file, or 2 if you want to write in the file!"<<endl;
    // cin>>choice;
    ofstream outfile;
    outfile.open("afile.dat", ios::app);

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    // write inputted data into the file.
    outfile << data << endl;

    // close the opened file.
    outfile.close();

    // open a file in read mode.
    ifstream infile;
    infile.open("afile.dat");

    cout << "Reading from the file" << endl;
    
    while (!infile.eof())
    {
        infile.getline(data, 100);
        cout << data << endl;
    }
    
   /*  while (!infile.eof())
    {
        infile.getline(data, 100);
        cout << data << endl;
    } */

    // close the opened file.
    infile.close();

    return 0;
}