#include <iostream>
using namespace std;


class Count{
	int n;
	
	public:
		Count(){
		
			n=0;
			
		}
		
		void operator++(int)
		{
		n++;
			
		}
		void operator++()
		{
		++n;
			
		}
		
		void show()
		{
					cout<<"Value of n is "<<n;
					cout<<endl;	
		}




};
int main()
{
	
	Count obj;

	obj.show();
	obj++;
	obj.show();
	++obj;
	obj.show();
	
	return 0;
	
}
