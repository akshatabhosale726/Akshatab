#include<iostream>
using namespace std ;
class Person {
	private :
		char name[10];
		long int  income;
		int age;
		int uid;
	public :
		void getinfo()
		{
			cout<<" \n Enter the name of the person : ";
			cin>>name;
			cout<<"\n Enter the age of person :  ";
			cin>>age;
			cout<<"\n Enter the income of the person : ";
			cin>>income;
			cout<<"\n Enter the uid no of the person : ";
			cin>>uid;
		}
		void disinfo()
		{
			cout<<"\n name of the person "<<name;
			cout<<" \n Age of the person "<<age;
			cout<<"\n Income of the person "<<income;
			cout<<" \n UID of the person "<<uid;			
		}
};
int main()
{
	Person obj;
	obj.getinfo();
	obj.disinfo();
}

