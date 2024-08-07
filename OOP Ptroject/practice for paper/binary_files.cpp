/*
Author: Zeeshan Shabir; zeeshan.shabir@nu.edu.pk
Date Modified: 16-June-2022

Agenda: To simply apply the concepts of Binary Files

To Run this File:
> g++ binary_files.cpp -o ./build/binary_files.out
> ./build/binary_files.out
*/

#include<iostream>
#include<fstream>
using namespace std;
struct Student {
   int roll_no;
   string name;
};

int main() {
   ofstream open_file_to_write("student.dat", ios::out | ios::binary);
   if(!open_file_to_write) {
      cout << "Cannot open file!" << endl;
      return 1;
   }

   Student write_student[3];
   write_student[0].roll_no = 1;
   write_student[0].name = "Ali";
   write_student[1].roll_no = 2;
   write_student[1].name = "Ahmed";
   write_student[2].roll_no = 3;
   write_student[2].name = "Abdul Waasay";

   for(int i = 0; i < 3; i++)
      open_file_to_write.write((char *) &write_student[i], sizeof(Student));
   open_file_to_write.close();
   if(!open_file_to_write.good()) {
      cout << "Error occurred at writing time!" << endl;
      return 1;
   }

   ifstream open_file_to_read("student.dat", ios::out | ios::binary);
   if(!open_file_to_read) {
      cout << "Cannot open file!" << endl;
      return 1;
   }
   
   Student read_student[3];
   for(int i = 0; i < 3; i++)
      open_file_to_read.read((char *) &read_student[i], sizeof(Student));
   open_file_to_read.close();
   if(!open_file_to_read.good()) {
      cout << "Error occurred at reading time!" << endl;
      return 1;
   }

   cout<<"Student's Details:"<<endl;
   for(int i=0; i < 3; i++) {
      cout << "Roll No: " << write_student[i].roll_no << endl;
      cout << "Name: " << write_student[i].name << endl;
      cout << endl;
   }
   return 0;
}