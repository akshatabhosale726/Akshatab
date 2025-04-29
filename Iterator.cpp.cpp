#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<int,string> m1;
	m1[0] = "Raj";
	m1[1] = "Viraj";
	m1[2] = "prem";
	m1[3] = "Jay";
	map<int,string>::iterator it;
	for(it=m1.begin();it!=m1.end();it++)
	{
		cout<<(*it).first<<"  "<<(*it).second<<endl;
	}
	return 0;
}
