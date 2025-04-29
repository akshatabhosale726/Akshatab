#include<iostream>
using namespace std;
template<typename T>
class Box{
	private : 	
		T l,b,h;
	public :
		void SetInfo()
		{	
			cout<<"\n Enter the value of the l,b,h : ";
			cin>>l>>b>>h;
		}
		Box()
		{
			T h =1;
			T b =1;
			T l =1;
		}
		void disInfo()
		{
			cout<<"values are"<<l<<endl<<b<<endl<<h<<endl;
		}
};
int main()
{
	Box<int>b1;
	b1.SetInfo();
	b1.disInfo();
	return 0 ;
}


