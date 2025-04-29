#include<iostream>
using namespace std ;
class A {
	public :
		int a;
		int b ;
	void get()
	{
		cout<<"\n Enter number ";
		cin>>a;
		cout<<"\n Enter number ";
		cin>>b;
		
	}
};
class B :  virtual public A 
{
	public :
		int c;
		void add()
		{
			  c= a+b;
			
		}
};

class C : virtual  public A
{
	public :
		int d ;
		void sub()
		{
			  d= a-b;
		
		}
};
class D : public B , public C {
	public :
		void show()
		{
			cout<<"\n Sum is "<<c;
			cout<<"\n Difference  is"<<d;
			
		}
		
};

int main()
{
	D obj;
	obj.get();
	obj.add();
	obj.sub();
	obj.show();
	return 0 ;
 } 
