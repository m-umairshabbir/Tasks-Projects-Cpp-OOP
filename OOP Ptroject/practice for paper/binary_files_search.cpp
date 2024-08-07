
/* 
Author: Zeeshan Shabir; zeeshan.shabir@nu.edu.pk
Date Modified: 16-June-2022

Agenda: To simply apply search insidce the Binary Files

To Run this File:
> g++ binary_files_search.cpp -o ./build/binary_files.out
> ./build/binary_files.out

Approach:
Step 1: Searching for the roll number in the binary file.
Step 2: While searching in the file, the variable “pos” stores the position of file pointer record then traverse(continue) reading of the record.
Step 3: If the roll number to be searched exists then place the write pointer (to ending of the previous record) i.e. at pos.
Step 4: Call getdata function to take the new record.
Step 5: Write the new object at the position “pos” and hence the record is updated and print “record successfully updated”.
Step 6: If the roll number does not exists then print “record not found”. 
*/

#include <bits/stdc++.h>
using namespace std;
  
class abc {
    int roll;
    char name[20];
  
public:
    void getdata(int, char[]);
    void update(int, int, char[]);
    void testcase1();
    void testcase2();
    void putdata();
};
  
// Code to display the data of the
// data of the object
void abc::putdata()
{
    cout << "roll no: ";
    cout << roll;
    cout << "\nname: ";
    cout << name;
}
  
// Code to set the value to the object
void abc::getdata(int a, char str[])
{
    // setting the new roll no
    roll = a;
  
    // setting new name
    strcpy(name, str);
}
  
void abc::update(int rno, int r, char str[])
{
    // code to update and modify
    // the content of the binary file
    int pos, flag = 0;
  
    // rno=9
    fstream fs;
    fs.open("he.dat",
            ios::in | ios::binary | ios::out);
  
    while (!fs.eof()) {
        // storing the position of
        // current file pointer i.e. at
        // the end of previously read record
        pos = fs.tellg();
  
        fs.read((char*)this, sizeof(abc));
        if (fs) {
  
            // comparing the roll no with that
            // of the entered roll number
            if (rno == roll) {
                flag = 1;
  
                // setting the new (modified )
                // data of the object or new record
                getdata(r, str);
  
                // placing the put(writing) pointer
                // at the starting of the  record
                fs.seekp(pos);
  
                // writing the object to the file
                fs.write((char*)this, sizeof(abc));
  
                // display the data
                putdata();
                break;
            }
        }
    }
    fs.close();
  
    if (flag == 1)
        cout << "\nrecord successfully modified \n";
    else
        cout << "\nrecord not found \n";
}
  
// Sample input 1
void abc::testcase1()
{
    int rno, r;
    char name[20];
  
    // roll no to be searched
    rno = 1;
  
    // new roll no
    r = 11;
  
    // new name
    strcpy(name, "Geek");
  
    // call update function with new values
    update(rno, r, name);
}
  
// Sample input 2
void abc::testcase2()
{
    int rno, r;
    char name[20];
  
    // roll no to be searched
    rno = 4;
  
    // new roll no
    r = 14;
  
    // new name
    strcpy(name, "Geek2");
  
    // call update function with the new values
    update(rno, r, name);
}
  
// Driver code
int main()
{
    abc s;
  
    // sample case 1
    s.testcase1();
  
    // sample case 2
    s.testcase2();
  
    return 0;
}