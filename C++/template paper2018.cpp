#include<iostream>
using namespace std;
template<class T>
class Test
{
	T x;
	static int count ;
	public:
	Test(){
		count++;
	}
	int returnCount();
};

int Test::count=0;
template<class T>
int Test<T>::returnCount(){
	return count;
	}
int main()
{  Test <int> a; //class Test has 1 template variable 'x' and one static int variable 'count' initialized with 0
    Test <int> b;
    cout<<b.returnCount(); }    //The function returnCount() should defined outside class 
//and will return value of count. Here the output will be 2}
