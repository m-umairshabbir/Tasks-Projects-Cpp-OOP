#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#define SIZE 5
using namespace std;

template <class T>

T findMin(T arr[])
{
	T min;
	
	min=arr[0];
	for(int i=0;i<SIZE;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	return (min);
}

int main()
{
	system ("cls");
	int iarr[]={5,4,3,2,1};
	char carr[]={'a','b','c','d','e'};
	double darr[]={3.2,6.5,4.2,7.8,1.2};
	
	cout<<"\n\n \t Generic function to find min from an array\n";
	
	cout<<"Integer min is "<<findMin(iarr);
	cout<<"\nCharater min is "<<findMin(carr);
	cout<<"\nDouble min is "<<findMin(darr);
	
	_getch();
	return 0;
}
