/*Author: Zeeshan Shabir; zeeshan.shabir@nu.edu.pk
Date Modified: 12-June-2022 

To Run this File:
> g++ main.cpp -o ./main.out
> ./main.out 
*/

#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string data[3];
     // writing data into csv
    ofstream	out("one.csv", ios::out);
	out<<"usman"<<","<<"3.9"<<","<<"pass"<<endl;
	out<<"farhan"<<","<<"3.9"<<","<<"pass"<<endl;
	out<<"shahzad"<<","<<"3.9"<<","<<"pass"<<endl;
	out<<"shahzad"<<","<<"3.9"<<","<<"pass"<<endl;
	out<<"shahzad"<<","<<"3.9"<<","<<"pass"<<endl;
		
	out.close();
    // reading data from csv and writing 
    string line;
    ifstream input;
    ofstream output;
    input.open("one.csv");
    output.open("two.csv", ios::app);
    if(input.is_open()){
	
    	while(getline(input,line,',')){
			output<<line<<",";
    	}
    }
}