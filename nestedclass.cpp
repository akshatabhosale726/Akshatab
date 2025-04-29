#include<iostream>
using namespace std;
class Outer {
	private :
		int a=100;
		int p;
	public :
		void getInfo()
		{
			cout<<"\n outer variable  a is "<<a;
		}
	class Inner{
		private : 
			int b;
		public :
			void getInfo()
			{
				cout<<" Inner varible is "<<b;
			}
			void setInfo()
			{
				cout<<"\n Enter the value for inner variable : ";
				cin>>b;
			}
	    Inner()
			{
				cout<<"\n  Inner default";
			}
	
	};
		Outer()
		{
			cout<<"\n Outer default";
		}
};
int main()
{
	Outer o1;
	o1.getInfo();
	Outer::Inner i1;
	i1.setInfo(); 
	i1.getInfo();
}
