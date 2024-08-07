#include <iostream>
using namespace std;

class A
{
  int nA;
  public:
    A() : nA(0) { }
    A(int n) : nA(n) { }
    
    int getA()
    {
        return(nA);
     }
      
};

class B
{
  int nB;
  public:
    B() : nB(0) { }
    B(int n) : nB(n) { }
    
    void display() const
    {
      int temp=nB;
      cout<<temp<<endl;
    }
    void operator = (A &tA)
    {
      
      nB = tA.getA();
    }
   
};


int main()
{
  A a1(4);
  B b1(0);
  b1.display();//0 will display
  b1=a1;  // b1.=(a1); //b1.equal(a1);      //A and B are two different user defined classes
  b1.display();//4 will display
  return 0;
}



