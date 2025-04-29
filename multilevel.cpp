#include<iostream>
using namespace std ;
class A {   // base 
	public :
		int a;
	void get()
	{
		cout<<"\n Enter number ";
		cin>>a;
	}
};
class B :public A //deri
{
		public :
			int b ;
		void get1()
		{
			cout<<"Enter number : ";
			cin>>b;
		}
};

class C : public B
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
	obj.get(); //a
	obj.get1(); //b 
	obj.add();// a+b
	return 0 ;
 } 
