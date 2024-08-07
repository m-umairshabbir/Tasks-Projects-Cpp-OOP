/*
/*Author: Zeeshan Shabir; zeeshan.shabir@nu.edu.pk
Date Modified: 16-June-2022

Agenda: To simply apply the concepts of Seek Pointers

To Run this File:
> g++ seek_pointers_copy02.cpp -o ./build/seek_pointers.out
> ./build/seek_pointers.out
*/


#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char data[100], str[100];
    int choice;
    /* Creating an object to write something into the file! */
    ofstream outfile;
    /* Creating an Object to perform both, write and write operations */
    fstream file_object;

    /* As the file_object is for both read& write, so we'll have to specify the required operation,
     by using ios::out */
    file_object.open("seek_pointer  s.dat", ios::out | ios::in);
    file_object << "This is a Sample Seek Pointers File";
    /* "The data inside the file is written."
    "We are good to extract the curr location of cursor (put cursor) !"
    "That is supposed to be after the last data!" */

    cout << "\n" << file_object.tellp() << endl;

    /* Exploring seekg(), the following line will help us to move 5 positions 
    starting from the begining.
    */
    file_object.seekg(5, ios::beg);
    cout << "The location after applying seekp() is: " << file_object.tellg() << endl;

    cout << "Let's check the functionality of tellp()!" << endl;
    cout <<file_object.tellp() << endl;
    /* file_object.open(file.dat, ios::in), or ifstream infile(file.dat) */

    file_object.getline(str, 100);
    cout << endl << str << endl; 
 

    /* Write the data from variable to the file. */
    // file_object << data << endl;

    // close the opened file.
    file_object.close();

    // /* As the file_object is for both read& write, so we'll have to specify the required operation,
    //  by using ios::out */
    // file_object.open("seek_pointers.dat", ios::in);
    // cout << "Reading from the file" << endl;
    // while (!file_object.eof())
    // {
    //     file_object.getline(data, 100);
    //     cout << data << endl;
    // }
    // /* close the opened file.
    // file_object.close();

    return 0;
}