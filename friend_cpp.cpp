#include<iostream>
using namespace std ;
class person {
	private :
		 static int x = 10;
	public :
		void show()
		{
			cout<<"\n value is of x : "<<x;
		}
		friend void add(person &p);
};
 void add(person &p)
		{
			p.x=p.x+5;
			cout<<"\n addtion is "<<p.x;
		}

 int main()
 {
 	person p ;
 	p.show();
 	add(p);
 	p.show();
 	return 0 ;
 }
