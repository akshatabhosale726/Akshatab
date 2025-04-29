#include<iostream>
using namespace std ;
class A {
	public :
		int a;
	void get()
	{
		cout<<"\n Enter number ";
		cin>>a;
	}
};
class B 
{
		public :
			int b ;
		void get1()
		{
			cout<<"Enter number : ";
			cin>>b;
		}
};

class C : public A, public B
{
	public :
		void add()
		{
			 int c= a+b;
			cout<<"Sum is "<<c;
		}
};
int main()
{
	C obj;
	obj.get();
	obj.get1();
	obj.add();
	return 0 ;
 } 
