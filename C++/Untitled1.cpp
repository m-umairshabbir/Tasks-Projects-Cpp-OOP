//question 4 2018
//#include <iostream>
//using namespace std;
//class expression
//{
//	double val;
//public:
//	expression()
//	{
//		val = 0.0;
//
//	}
//	expression(float x) {
//		val = x;
//
//	}
//	expression operator+(expression a1)
//	{
//		expression a;
//		a.val = val + a1.val;
//		return a;
//	}
//	expression operator--()
//	{
//		return expression(--val);
//	}
//	expression operator*(expression b1)
//	{
//		expression b;
//		b.val = val * b1.val;
//		return b;
//	}
//	expression operator --(int)
//	{
//		return expression(val--);
//
//	}
//	double showvalue()
//	{
//		return val;
//	}
//};
//int main() {
//	expression e1, e2(5.5), e3(2.0), e4;
//	e4 = e3;
//	e1 = e2 + --e3 * e4--;
//	cout << e1.showvalue();
//	return 0;
//}
//


































// question 1 2018
#include<iostream>
#include"string"
using namespace std;
class Person
{
	string pname;
public:
	void getdata()
	{
		cin >> pname;

	}
	void shoedata()
	{
		cout << pname;
	}
};
	class blower : public Person
	{
		float speed;
	public:
		int getspeed()
		{
			cin >> speed;
			return speed;

		}
	};
	class spinner : public blower
	{

};
	class Blower_comparison
	{
	public:
		spinner obj1, obj2;
		bool checkequality(spinner::blower obj1, spinner::blower obj2)
		{
			if(getspeed==true)
            return 0;
       else 
             return 1;
		
		}
	};
	int main()
	{
		spinner s1, s2;
		Blower_comparison bc;
		s1.getdata();
		s2.getdata();
		s1.getspeed();
	bool 	b = bc.checkequality(s1, s2);
 if (b==1)
 cout<<"differt same";
 else 
 cout<<"same";
	
	return 0;

	}
	//QUES 3 2018
//#include<iostream>
//using namespace std;
//template <class T>
//class Test
//{
//	T x;
//	static  int count;
//public:
//	Test()
//	{
//		count++;
//	}
//	int returncount();
//
//};
//      template<class T>
//	  int Test<T>::count = 0;
//	  template<class T>
//	  int Test<T>::returncount() {
//		  return count;
//	  }
// int main()
//	  {
//		  Test <int>a;
//		  Test <int>b;
//		  cout << b.returncount();
//		 return  0;
//	  }
// qUES 2
//#include<iostream>
//using namespace std;
//class SwissAccount
//{
//	string name;
//	double AccId, amount;
//
//
//};
//class PakAccount : public SwissAccount
//{
//	string Pak_Address;
//	double  PassportNo, CNIC ;
//};
//class OtherAccount : public SwissAccount
//{
//	double SSNO;
//	string address;
//};
//class pakEmbassy
//{
//	 int PakAccount[500];
//	double value;
//public:
//	void displayPakAccount()
//	{
//		cin >> value;
//
//		if (value > 0)
//			cout << "correct";
//		else
//			throw(value);
//	}
//};
//int main()
//{
//	pakEmbassy PE;
//	try {
//		PE.displayPakAccount();
//	}
//	catch (...)
//	{
//		cout << "Error is due to negitive amount " << endl;
//	}
//	return 0;
//}
