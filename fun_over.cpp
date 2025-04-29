#include<iostream>
using namespace std;
const float pi =3.14;
float area(int r)
{
	float result;
	result=pi*r*r;
	cout<<"\n the area circle is "<<result;
}
int area(int l ,int b)
{
	int result;
	result=l*b;
	cout<<"\n the area reactangle is "<<result;
}
int main()
{
	int l,b,r;
	cout<<"\n Enetr the lenght ,breaght ,radius:";
	cin>>r>>b>>l;
	area(r);
	area(l,b);
	return 0;
	
}

