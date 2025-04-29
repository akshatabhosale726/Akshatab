#include<iostream>
using namespace std ;
int main ()
{
	int age=15;
	try {
			if(age >=18)
			{
				cout<<"\n valid age for voting "<<endl;
			}
			else 
			throw (age);	
	}
	catch(int num)
	{
		cout<<"Age not valid for voting "<<endl;
		cout<<"Age is "<<num;
	}
	return 0 ;
}
