#include <iostream>
using namespace std;

class B {
    private:
     int y;
    public:
    B() : y(1) {}
    B(int a) : y(a) {}
    
	int getY() 
	{
	 return y; 
	}
  
};


class A {
    
     int x;
    public:
    A() : x(0) {}
    A(int b) : x(b) {}
    void operator =(B &in) {
       x = in.getY();
    }
    void display() { cout << x << endl; }
  
};


int main() {
   A a;
   B b(5);
   a.display();
   a = b;
   a.display();
}


