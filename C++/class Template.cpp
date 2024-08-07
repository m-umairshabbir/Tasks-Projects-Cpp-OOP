#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#define SIZE 3
using namespace std;

template <class T>
class Test{
	T arr[SIZE];
	public:
		Test(){}
		
		T input (){
			for(int i=0;i<SIZE;i++)
			cin>>arr[i];
		}
		
		T output(){
				for(int i=0;i<SIZE;i++)
				cout<<arr[i]<<endl;	
		}
		
};

int main(){
	cout<<"Enter three integers:";
	Test <int> x;
	x.input();
	Test <char> y;
	cout<<"Enter three Characters:";
	y.input();
	Test <double> z;
	cout<<"Enter three Doubles:";
	z.input();
	_getch();
	system("cls");
	cout<<"\n\n\t The Data is Here:\n";
	x.output();
	y.output();
	z.output();
}
